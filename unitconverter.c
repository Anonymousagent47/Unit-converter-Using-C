#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    int tc; //Temperature Choice
    int cc; //Currency Choice
    int wc; //Weight Converter
    int lc; // Length Converter
    float inf; // Ferhenite Input
    float inc; // Celcius input
    float usdin; //Usd Value input
    float inind; //Indian Rupee Input
    float euroin; // Euro input
    float gramin; //Input Gram
    float kiloin; //OInput Kilo
    float ftoc; //Ferhentite to Celcius
    float ctof; //Celcius To ferhenite
    float usdtoind; //USD to IND 
    float indtousd; //IND to USD 
    float eurotoind; //EURO to IND
    float indtoeuro; //IND to Euro 
    float gramtokilo; //Gram to Kilo
    float kilotogram; //Kilo to Gram
    float km; //KM input
    float m; //M inout
    float kmtom; // Km to meter 
    float mtokm; //meter to km


printf("\n");
    printf(".... WELCOME TO UNIT CONVERTER ....\n");
    printf("-------------------------------------\n\n");
    printf("Choose Your Converter:-\n1. Tempreture Conveter\n2. Currency converter\n3. Weight Converter\n4. Length Converter\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("\nWELCOME TO TEMPRETURE CONVERTER\n");
        printf("..................................\n\n");
        printf("Make Your Choice:-\n1. Ferhenite to Celcius\n2. Celcaius to Ferhenite\n");
        printf("Enter Your choice: ");
        scanf("%f",&tc);
        if(tc==1)
        {
            printf("You choose Ferhenite To Celcius.....\n");
            printf("Enter Temperature in Ferhenite: ");
            scanf("%f",&inf);
           ftoc = ((inf-32) * (5/9));
            printf("Answer of %f Ferhenite is %f Celcius",inf,ftoc);
        }else if (tc==2)
        {
            printf("\nYou Choose Celcius To Ferhenite....\n");
            printf("Enter Tempreture in Celcius: ");
            scanf("%f",&inc);
            ctof = ((9.0/5.0)*inc+32);
            printf("Answer of %f Celcius is %f Ferhenite",inc,ctof);
        }else
        {
            printf("Enter Valid Command !!!");
        }        
    }else if(choice==2)
    {
        printf("\nWelcome TO Currency Converter\n");
        printf("...............................\n");
        printf("Make Your Choice :-\n1. IND to USD \n2. USD to IND \n3. IND to EURO\n4. EURO to IND\n");
        printf("Enter Your Choice: ");
        scanf("%f",&cc);

        if(cc==1)
        {
            printf("\nYou Choose IND to USD....\n");
            printf("Enter Value Of IND: ");
            scanf("%f",&inind);
            indtousd = inind/79.81;
            printf("Value of %f IND is %f USD",inind,indtousd);
        }else if(cc==2)
        {
            printf("\nYou choose USD to IND....\n");
            printf("Enter Value in USD: ");
            scanf("%f",&usdin);
            usdtoind = usdin*79.81;
            printf("Value of %f USD is %f IND",usdin,usdtoind);
        }else if(cc==3)
        {
            printf("\nYou Choose IND to EURO....\n");
            printf("Enter Value in IND: ");
            scanf("%f",inind);
            indtoeuro = inind/79.25;
            printf("Value of %f IND is %f EURO",inind,indtoeuro);
        }else if(cc==4)
        {
            printf("\nYou Choose EURO to IND....\n");
            printf("Enter Value in EURO: ");
            scanf("%f",&euroin);
            eurotoind = euroin*79.25;
            printf("Value of %f EURO is %f IND",euroin,eurotoind);
        }else
        {
            printf("Enter Valid Command !!");
        }
    }else if(choice == 3)
    {
        printf("\nWELCOME TO WEIGHT CONVERTER\n");
        printf(".............................\n\n");
        printf("Make Your Choice:- \n 1. Gram to KiloGram\n 2. KiloGram to Gram\n");
        printf("Enter Your Choice: ");
        scanf("%f",&wc);
        if(wc==1)
        {
            printf("\nYou Choose Gram to KiloGram....\n");
            printf("Enter Value of Gram: ");
            scanf("%f",&gramin);
            gramtokilo = gramin/1000;
            printf("Weight of %f Grams is %f Kilogram",gramin,gramtokilo);
        }else if(wc==2)
        {
            printf("\nYou Choose KiloGram to Gram....\n");
            printf("Enter Value of KiloGram: ");
            scanf("%f",&kiloin);
            kilotogram = kiloin * 1000;
            printf("Weight of %f KiloGram is %f Grams",kiloin,kilotogram);
        }
    }else if (choice == 4){
        printf("WELOCME TO LENGTH CONVERTER\n");
        printf("...........................\n\n");
        printf("Make Your Choice:- \n1. KM To Meter\n2. Meter To KM\n");
        printf("Enter Your Choice: ");
        scanf("%d",&lc);
        if(lc == 1){
            printf("\nYou Choose KM To Meter...\n");
            printf("Enter Value of KM: ");
            scanf("%f",&km);
            kmtom=km*1000;
            printf("Distance of %.2f KM is %.2f Meter",km,kmtom);
        }else if(lc ==2){
            printf("\nYou Choose Meter To KM...\n");
            printf("Enter Value of Meter: ");
            scanf("%f",&m);
            mtokm=m/1000;
            printf("Distance of %.2f Meter is %.2f KM",m,mtokm);
        }else{
            printf("Enter Valid Value");
        }
    }else{
        printf("Enter Vaid Command !!");
    }   
    return 0;
}
