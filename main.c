#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){
    //String och int
    char *name = "Stefan"; // literal = text-segmentet
    int age = 50;

    printf("My name is %s and I am %d years\n",name,age );
    
    char name2[] = "Stefan"; // Skillnad = stackallokerad = read+write
    printf("My name is %s and I am %d years\n",name,age );


    //String och int 2
    char name3[50];
    int age3;
    printf("What's your name:");
    scanf(" %s", name3);
    printf("What's your age:");
    scanf(" %d", &age3);
    
    printf("Hi, %s you are %d years\n",name3,age3 );

    if(age3 > 50){
        printf("Wow you're old ;) \n" );
   }



    //FÖR OCH EFTERNAMN
     char fornamn[20];
     char efternamn[20];

     printf("Enter forname:");
     scanf(" %s", fornamn);
     printf("Enter surname:");
     scanf(" %s", efternamn);

     printf("Your name is %s, %s\n", efternamn, fornamn );



    //STRING ADDER
    char text1[20];
    char text2[20];
    char text3[20];

    char textTotal[62];
    printf("Enter text 1:");
    scanf(" %s", text1);
    printf("Enter text 2:");
    scanf(" %s", text2);
    printf("Enter text 3:");
    scanf(" %s", text3);

    strcpy(textTotal,text1 );
    strcat(textTotal," " );
    strcat(textTotal,text2 );
    strcat(textTotal," " );
    strcat(textTotal,text3 );

    printf("Result: %s and it's %d chars\n", textTotal, strlen(textTotal) );


    srand(time(NULL));
    //INMATNING
    bool runAgain = true;
    while(runAgain){
        int random_number = rand() % 20 + 1;
        printf("Nu blev det %d\n", random_number);

        char cont[10];
        while(1){
            printf("Vill du fortsätta Yes/No?");
            scanf(" %s", cont);
            if(!strcmp(cont,"No")){
                runAgain = false;
                break;                    
            }
            if(!strcmp(cont,"Yes")){
                runAgain = true;
                break;                    
            }
            printf("Yes or No please");
        }
    }



//     if(strcmp(fornamn, "Stefan") == 0 && strcmp(efternamn, "Holmberg") == 0)    {
//         printf("What a noob\n");
//     }

//     char helanamnet[41]; // namn " " efternamn
//     //helanamnet = fornamn + " " + efternamn;
//     strcpy(helanamnet, fornamn );
//     strcat(helanamnet, " "); //concat
//     strcat(helanamnet, efternamn); //concat
//     printf("*****\n");
//     printf(helanamnet);
//     printf("\n*****\n");



//     if(strcmp(helanamnet, "Stefan Holmberg")== 0)    {
//         printf("What a noob\n");
//     }


//     while(1)
//     {
//         char cont[20];
//         printf("Vill du fortsätta Ja, Nej?");
//         scanf(" %s", cont);
//         //vad är cont?
//         // array med sekvens av chars
//         // pekare (adress) till en sekvens av chars
//         // C känner inte till strängar...så hur 17 ska C kunna jämföra strängar
//         // jämförelser strängar i C - jämföra om sekvens 1 är samma som sekvens 2 
//         // if(strcmp(cont,"Nej") == 0 ){
//         //     break;
//         // }
//         // if(!strcmp(cont,"Nej")){
//         //     break;
//         // }
//         if(strcmp(cont,"Nej") == 0){
//             break;
//         }



//         // if(cont == "Nej")
//         //     break;
//     }
//     printf("Slut");




//     char team[20];
//     printf("Ange lag:");
//     scanf(" %s", team);
//     printf("hej hej du spelar i %s laget", team);
     


//     char *namn = "stefan"; // readonly med char * = "string"
//     char namn2[] = "stefan"; // read writable -> stacken


//     namn2[0] = 'S';
//     namn2[2] = 'E';

//     namn[0] = 'S';
//     namn[2] = 'E';

//     printf("%s\n", namn);
//     printf("%s\n", namn2);
//     printf("Klart\n");

//     //sekvens av datatypen

// //    char namn3[] = {'S', 't', 'e', 'f', 'a', 'n', 0} ;
// //    int heatRegistrations[] = {12,33,22};


// //    int i = 123;

//     printf("%s", namn2);
//     printf(namn2);
    
//     // GÅ IGENOM (iterera) en sträng - tecken för tecken
//     int index = 0;
//     int count = 0;
//     printf("%c\n",namn[0]);
//     printf("%c\n",namn[1]);
//     printf("%c\n",namn[2]);
//     printf("%c\n",namn[3]);
//     printf("%c\n",namn[4]);
//     printf("%c\n",namn[5]);
//     printf("%c\n",namn[6]);

//     /// %s
//     while( namn[index] > 0  ){
//         //printf("%c\n",namn[index]);
//         index++;
//         count++;
//     }
    



}
