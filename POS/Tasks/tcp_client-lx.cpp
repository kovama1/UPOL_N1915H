#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>

#define BUFSIZE 1000

using namespace std;

int main(int argc, char *argv[])
{
    string text;//("Ahoj\n");      // Odesílaný a přijímaný text
    hostent *host;              // Vzdálený počítač;
    sockaddr_in serverSock;     // Vzdálený "konec potrubí"
    int mySocket;               // Soket
    int port;                   // Číslo portu
    char buf[BUFSIZE];          // Přijímací buffer
    int size;                   // Počet přijatých a odeslaných bytů
    
    start:
    // tohle se posune jinam
    cout << "Napis zpravu:\t";
    getline (cin, text);
    text += '\n';

    if (argc != 3)
    {
        cerr << "Syntaxe:\n\t" << argv[0]
                  << " " << "adresa port" << endl;
        return -1;
    }
    port = atoi(argv[2]);
    // Zjistíme info o vzdáleném počítači
    if ((host = gethostbyname(argv[1])) == NULL)
    {
        cerr << "Špatná adresa" << endl;
        return -1;
    }
    // Vytvoříme soket
    if ((mySocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == -1)
    {
        cerr << "Nelze vytvořit socket" << endl;
        return -1;
    }
    // Zaplníme strukturu sockaddr_in
    // 1) Rodina protokolů
    serverSock.sin_family = AF_INET;
    // 2) Číslo portu, ke kterému se připojíme
    serverSock.sin_port = htons(port);
    // 3) Nastavení IP adresy, ke které se připojíme
    memcpy(&(serverSock.sin_addr), host->h_addr, host->h_length);
    // Připojení soketu
    if (connect(mySocket, (sockaddr *)&serverSock, sizeof(serverSock)) == -1)
    {
        cerr << "Nelze navázat spojení" << endl;
        return -1;
    }
    // Odeslání dat

    if ((size = send(mySocket, text.c_str(), text.size() + 1, 0)) == -1)
    {
        cerr << "Problém s odesláním dat" << endl;
        return -1;
    }
    //cout << "Odesláno " << size << endl;
    // Příjem dat
    text = "";
    /*while ((size = recv(mySocket, buf, BUFSIZE, 0)) != -1) 
    {        
        cout << "Přijato " << size << endl;
        text += buf;
    }*/
    while (((size = recv(mySocket, buf, BUFSIZE, 0)) != 0) && (size != -1))
    {
        //cout << "Přijato " << size << endl;
        text += buf;
    }
    if (size == -1)
    {
        cout << "Nelze přijmout data" << endl;
    }
    // Uzavřu spojení
    close(mySocket);
    cout << "***************************************" << endl;
    cout <<  endl << text << endl;
    cout << "***************************************" << endl;
    goto start;
    return 0;
}