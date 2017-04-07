#include <string.h>
#include <stdio.h>
#include <stdlib.h>

const char *Jmena[]=
{ "Marie","Jan","Jana","Petr","Josef","Pavel","Jaroslav","Martin","Miroslav","Eva",
    "Anna","Hana","Karel","Lenka","Milan","Michal","Alena","Petra","Lucie","Jaroslava",
    "Ludmila","Helena","David","Ladislav","Jitka","Martina","Jakub","Veronika","Jarmila","Stanislav",
    "Michaela","Ivana","Roman","Monika","Tereza","Zuzana","Radek","Vlasta","Marcela","Marek",
    "Dagmar","Dana","Daniel","Marta","Irena","Miroslava","Barbora","Pavla","Miloslav","Olga",
    "Andrea","Iveta","Filip","Blanka","Milada","Ivan","Zdenka","Libor","Renata","Rudolf",
    "Vlastimil","Nikola","Gabriela","Adam","Radka","Simona","Milena","Miloslava","Iva","Daniela",
    "Patrik","Bohumil","Denisa","Robert","Romana","Aneta","Ilona","Dominik","Stanislava","Emilie",
    "Radim","Richard","Kamila","Ivo","Rostislav","Vladislav","Bohuslav","Alois","Vit","Kamil",
    "Jozef","Vendula","Bohumila","Viktor","Emil","Michael","Ladislava","Magdalena","Eduard","Dominika",
    "Marcel","Sabina","Julie","Antonie","Alice","Peter","Dalibor","Kristina","Otakar","Karla",
    "Hedvika","Alexandra","Silvie","Erika","Nela","Vratislav","Nikol","Leona","Jolana","Margita",
    "Bohuslava","Radovan","Josefa","Terezie","Marian","Linda","Igor","Magda","Lada","Bohumir",
    "Alexandr","Adriana","Dita","Vladislava","Otto","Sandra","Radmila","Svatava","Darina","Sylva",
    "Viktorie","Ivona","Bronislava","Elena","Svatopluk","Ivanka","Denis","Adolf","Hynek","Erik",
    "Bronislav","Drahoslava","Alexander","Robin","Maria","Diana","Lidmila","Vlastislav","Michala","Jindra",
    "Juraj","Vlastimila","Karin","Zdena","Karolina","Mykola","Pavol","Vanda","Radoslav","Zdenek",
    "Alenka","Ema","Andrej","Tibor","Anton","Ingrid","Nina","Viera","Valerie","Samuel",
    "Zlata","Lydie","Tamara","Johana","Patricie","Julius","Boris","Leopold","Ota","Ester",
    "Gertruda","Sylvie","Aloisie","Oto","Barbara","Gustav","Marika","Yvona","Oksana","Bohdan",
    "Olena","Regina","Svitlana","Hanna","Bohdana","Miriam","Dan","Karol","Yveta","Ferdinand",
    "Nicole","Radana","Zora","Emanuel","Vanesa","Nikolas","Erich","Viliam","Zita","Leo","Natalie",
    "Tatiana","Gabriel","Brigita","Laura","Iryna","Hildegarda","Anita","Mariana","Cyril","Petro",
    "Lubor","Augustin","Vendulka","Radoslava","Radomil","Albert","Dobromila","Lucia","Irma","Helga",
    "Imrich","Otilie","Emma","Norbert","Janka","Krista","Drahoslav","Hubert","Halina","Beata",
    "Nicola","Sebastian","Oleg","Valentina","Dorota","Oliver","Silvia","Nicol","Judita","Gerhard",
    "Dobroslava","Irina","Walter","Mario","Alan","Vasil","Hilda","Sofie","Vanessa","Ctibor",
    "Klaudie","Cecilie","Alex","Natalia","Berta","Oskar","Vladan","Alfred","Bruno","Nikola",
    "Ida","Stepan","Mirka","Darja","Gejza","Marianna","Vojtech","Zdislava","Eleonora","Anastazie",
    "Herbert","Galina","Emilia","Viola","Vladimir","Juliana","Rastislav","Angelika","Adrian",
    "Karina","Artur","Gizela","Boleslav","Ruslan","Radko","Roland","Nicolas","Ernest","Kevin",
    "Prokop","Ingeborg","Svatoslav","Sarah","Ctirad","Helmut","Danuta","Vincenc","Yvetta","Zdenko",
    "Krystyna","Svetlana","Jozefa","Verona","Erna","Blahoslav","Terezia","Maxim","Dezider",
    "Valentyna","Maryna","Simon","Jelena","Rita","Alexej","Alla","Koloman","Vincent","Radislav",
    "Bogdan","Angela","Marina","Herta","Janina","Agnesa","Dobroslav","Edvard","Horst","Izabela",
    "Margareta","Valeria","Milana","Julia","Kurt","Eugen","Svatoslava","Hugo","Margit","Ilja",
    "Mirko","Jarmil","Liliana","Alojz","Elen","Andreas","Justina","Marketa","Matylda","Otta",
    "Amalie","Werner","Bernard","Adela","Zina","Jessica","Eugenie","Katrin","Thomas",
    "Leon","Melanie","Sonja","Radomila","Huong","Teodor","Katarina","Theodor","Manfred","Branislav",
    "Valter","Inna","Bohunka","Daria","Otmar","Larysa","Silvestr","Etela","Vladana",
    "Christian","Larisa","Andrzej","Max","Valentin","Ellen","Liana","Zlatica","Teresa",
    "Ljuba","Nora","Nella","Zoja","Patrick","Vlastislava","Radan","Ruth","Kvetoslava","Taras",
    "Aranka","Vratislava","Kristian","Alina","Xenie","Son","Benjamin","Danka",
    "Filomena","Marko","Stefan","Aurelie","Slavomil","Benedikt","Slavoj","Nelly","Ilonka","Konstantin",
    "Berenika","Antonia","Lidia","Pavlina","Alfons","Victor","Doris","Tina","Zofia",
    "Sergej","Felix","Edeltraud","Matej","Johanka","Wolfgang","Mirek","Annemarie","Gerda","Otomar",
    "Marija","Andrei","Wanda","Nikolaj","Zbigniew","Zdislav","Rosalie","Noemi",
    "Gisela","Leonid","Matilda","Sofia","Inka","Ella","Trang","Marco","Viktoria","Inge","Lena","Ana",
    "Oxana","Sylvia","Jadwiga","Tatjana","Dora","Victoria","Valdemar","Sabrina","Long","Ekaterina",
    "Jennifer","Edith","Bartolomej","Lidie","Anastasia","Agata","Isabela","Johanna",
    "Elizabeth","Tom","Natalija","Dalimil","Apolena","Stella","Silva","Leonard","Danica","Klement",
    "Pravoslav","Jesika","Otokar","Josefina","Krzysztof","Ursula","Gita","Katka","Elfrieda",
    "Alica","Heinz","Tobias","Piotr","Leopoldina","Waltraud","Vadim","Edmund","Claudia","Luisa",
    "Darek","Lan","Ervin","Osvald","Tomasz","Hang","Duc","Vilibald","Doubravka","Gerlinda","Hannelore",
    "Ela","Stela","Charlotte","Jolanta","Ruslana","Arnold","Margarita","Lydia","Dimitrij",
    "Klaus","Elisabeth","Jenifer","Rozalie","Michelle","Zorka","Dennis","Anastasie","Paulina","Ewa",
    "Ronald","Rebeka","Yana","Tadeusz","Edeltrauda","Irmgard","Ludvika","Attila","Stefanie",
    "Dagmara","Christina","Lev","Ryszard","Antonio","Henryk","Janusz","Antonina","Waldemar","Hildegard",
    "Vera","Augustina","Blahoslava","Klaudia","Vasile","Urszula","Binh","Emanuela","Jerzy","Mark",
    "Adriena","Brigitta","Jenovefa","Rosemarie","Rozalia","Aleksandra","Pamela","Zoran","Lukas",
    "Tomislav","Patricia","Sara","Leontina","Rut","Ilsa","Erhard","Edeltruda","Evelina",
    "Christa","Elzbieta","Artem","Dieter","Jurij","Emerich","Fedor","Henrieta","Jozefina","Petronila",
    "Van","Alexandru","Egon","Zinaida","Rafael","Reinhold","Ljubov","Dobromil","Mohamed",
    "Stanislaw","Paul","Evald","Reinhard","Hedviga","Hermina","Jena","Myron","Samanta","Claudie",
    "Raisa","Nicolae","Charlotta","Eleni","Estera","Gerta","Nathalie","Paula","Yvonna","Janette",
    "Denys","Franz","William","Katarzyna","Augusta","Maxmilian","Annelies","Caroline",
    "Aleksandar","Raimund","Verner","Joanna","Carmen","Halka","Viet","Ilse",
    "Dariusz","Marianne","Petronela","Damian","Gheorghe","Aurelia","Leopolda","Georgios","Janis","Nikita",
    "Ali","Dragan","Nikoleta","Anatolij","Vita","Mariusz","Anetta","Charlota","Yvonne","Malgorzata","Sophie",
    "Frank","Toan","Heda","Natali","Rajmund","Greta","George","Grzegorz","Johann","Elsa","Rostislava","Harald",
    "Rudolfa","Leszek","Markus","Beatrice","Goran","Zlatko","Hanka","Christine","John","Adina",
    "Josefka","Borek","Michail","Jacek","Loan","Maja","Olivie","Florian","Melisa","Drahomila",
    "Siegfried","Elfrida","Julianna","Milica","Justin","Albina","Olina","Alicja","Dina","Grazyna","Georgi",
    "Mathias","Bernardina","Isabella","Slavomila","Edward","Karl","Philip","Slavka","Omar","Ada","Khanh",
    "Roberto","Slavko","Alma","Bibiana","Kornelie","Stanislawa","Matthias","Manuela","Nick",
    "Rainer","Angelina","Violeta","Agnieszka","Harry","Adolfina","Natalja","Gerlinde","Janetta",
    "Marcella","Vitalij","Teresie","Philipp","Kirill","Nikita","Radovana","Anatol",
    "Ljudmila","Edgar","Maximilian","Nika","Bohdanka","Debora","Henrich","Kazimierz","Sidonia","Georg",
    "Miroslaw","Radmil","Samir","Ina","Ria","Hans","Liboslav","Nikos","Adolfa","Annamarie","Tam","Christopher",
    "Matyas","Mia","Viktorija","Karim","Nicholas","Katerina","Samantha","Danny","Orest","Anneliese",
    "Wieslawa","Brian","Dumitru","Petar","Silvester","Stefania","Cecilia","Nancy","Alexandre","Hermann",
    "Kostas","Milka","Sophia","Aleksandr","Eric","Christos","Quido","Semen","Wieslaw","Genowefa","Lilia",
    "Polina","Dejan","Valerij","Elvira","Fatima","Sonia","Ahmed","Dmitrij","Brunhilda","Jasna","Nelli",
    "Branko","Erwin","Veronica","Alessandro","Enrico","Karen","Vivien","Zuzanna","Joachim","Sebastien",
    "Lidija","Lubica","Matteo","Lothar","Bianka","Elizaveta","Vincencie","Zikmund","Chiara","Iris","Ivetta",
    "Ivonka","Julija","Margot","Mirjana","Vincencia","Bernhard","Gregor","Johan","Luboslav","Carolina",
    "Cristina","Emily","Rebecca","Saskia","Damir","Annette","Elfriede","Leila","Marcin","Jeanette","Radislava",
    "Stephanie","Allan","Pawel","Valtr","Zdeno","Inga","Irenka","Kazimiera","Leokadie","Lina","Dimitrios",
    "Timotej","Agnes","Dorothea","Lucyna","Sven","Alojzia","Amelie","Willibald","Ksenia","Lili","Zoe",
    "Gertrud","Heidi","Iwona","Katharina","Mira","Nadia","Roxana","Julian","Amanda","Ilja","Walburga",
    "Anatoli","Astrid","Nadija","Francesco","Giuseppe","Tomas","Jacqueline","Maya","Melania","Theodora",
    "Yvette","Anthony","Timur","Vlasta","Amalia","Bernadeta","Frieda","Dietmar","Fabian","Simeon",
    "Alisa","Karmen","Roswitha","Andrea","Beno","Dimitr","Ewald","Giovanni","Lambert","Luca","Nikolaos",
    "Dalimila","Mariola","Roza","Constantin","Anika","Helenka","Lilian","Gerald","Joseph","Mike","Nenad",
    "Aida","Lieselotte","Zlatka","Andrew","Jordan","Lucas","Marin","Zenon","Apolonie","Bernarda","Mirjam",
    "Niki","Elisabeta","Marc","Reiner","Rolf","Willi","Boleslava","Dajana","Amir","Edvin","Michel","Elisa",
    "Ernestina","Marieta","Pravoslava","Susanne","Jonatan","Kvido","Bianca","Mariam","Vesna","Manuel",
    "Wilhelm","Aniela","Ariana","Brigitte","Editha","Ingrida","Jutta","Mahulena","Dino","Steven","Jenny",
    "Jovana","Kim","Kveta","Larissa","Zuzanka","Fridrich","Vladko","Babeta","Edeltraut","Evelyn","Gizella",
    "Janeta","Ahmad","Luka","Stefano","Klara","Lilija","Alfonz","Angel","Fabio","Herman","Christoph",
    "Jindra","Udo","Apolonia","Evgenia","Heidemarie","Henryka","Klotilda","Mlada","Priska","Johannes",
    "Miron","Vladivoj","Otilia","Renate","Sidonie","Aladar","Berthold","Gerd","James","Jovan","Sami",
    "Wilfried","Andriana","Etelka","Felicitas","Lara","Marion","Melinda","Melissa","Nicolle","Armin",
    "Arthur","Belo","Kliment","Michalis","Petros","Vasilij","Francesca","Ines","Maryla","Monica","Simone",
    "Frederik","Lubomil","Radvan","Isabel","Oliva","Silvestra","Albin","Daniele","Ernst","Christo",
    "Jaroslaw","Oswald","Tony","Clara","Ditta","Edda","Eugenia","Illona","Livie","Vilemina","Stojan",
    "Jasmin","Lidka","Mercedes","Roberta","Suzana","Paolo","Ralf","Todor","Anne","Gina","Gordana",
    "Isolda","Jeannette","Liselotte","Nicolette","Rudolfina","Yweta","Zlatoslava","Arsen","Carlos",
    "Darko","Jacob","Kornel","Michele","Ruben","Vasilis","Cindy","Denise","Dolores","Livia","Selma",
    "Atila","Ilija","Jevgenij","Cyrila","Dalila","Eduarda","Kornelia","Milota","Diego","Dimitris",
    "Catherine","Darie","Kristyna","Mona","Sindy","Alen","Darius","Heinrich","Mateusz","Adelheid",
    "Draga","Gertraud","Riana","Sanja","Susan","Arno","Georgij","Giorgio","Philippe","Riccardo","Timothy",
    "Adelheida","Brenda","Miriama","Olivia","Perla","Tekla","Violetta","Armen","Ludovit","Esther",
    "Gustava","Ljubica","Sabine","Sieglinde","Adnan","Alberto","Bojan","Demeter","Edwin","Engelbert",
    "Friedrich","Leonhard","Rene","Romeo","Vlastibor","Dragana","Giulia","Jevgenija","Lujza","Alexandros",
    "Andre","Bernd","Ioannis","Jens","Konrad","Marius","Svatobor","Zbyslav","Dorotea","Naomi","Narcisa",
    "Rosvita","Dario","Ivar" };

const unsigned Pocet=sizeof(Jmena)/sizeof(*Jmena);

void serad_jmena_SS(){
    int i, iMin, j;
    const char * x;
    
    for(j = 0; j < (Pocet - 2); j++){
        iMin = j;
        for(i = j + 1; i < (Pocet - 1); i++){
            if(strcmp(Jmena[i], Jmena[iMin]) < 0){
                iMin = i;
            }
        }
        x = Jmena[j];
        Jmena[j] = Jmena[iMin];
        Jmena[iMin] = x;
    }
}

int BinarySearch(int k, int l, char x[]){
    int s;
    if(k > l){
        return -1;
    }
    s = (k+l)/2;
    if(strcmp(x,Jmena[s]) < 0){
        return BinarySearch(k, s-1, x);
    }
    if(strcmp(x,Jmena[s]) > 0){
        return BinarySearch(s+1, l, x);
    }
    return s;
}

void vypis(){
    int i;
    for(i = 0; i < (Pocet-1); i++){
        printf("%s %d,", Jmena[i], i);
    }
}

int isChar(char string[]){
    int i = 0;
    while(string[i] != '\0'){
        if(!isalpha(string[i])){
            return -1;
        }
        i++;
    }
    return 0;
}


void loop(char string[]){
    if(isChar(string) == 0){
        int vysledek = -1;
        
        vysledek = BinarySearch(0, Pocet, string);
        if(vysledek != -1){
            printf("Jmeno %s je na pozice: %d", Jmena[vysledek], vysledek+1);
        }else{
            printf("Jmeno %s nebylo nalezeno\n", string);
        }
        
        scanf("%s", string);
        loop(string);
        
    }else{
        printf("Vstup neni slozen z pismen!");
    }
}

int main()
{
    char * string = malloc(sizeof(*string));
    serad_jmena_SS();
    printf("Zadej jmeno: ");
    scanf("%s", string);
    
    loop(string);
    
    return 0;
}
