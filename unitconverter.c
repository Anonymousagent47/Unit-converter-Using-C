#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    int tc; //Temperature Choice
    int cc; //Currency Choice
    int wc; //Weight Converter
    int inf; // Ferhenite Input
    int inc; // Celcius input
    int usdin; //Usd Value input
    int inind; //Indian Rupee Input
    int euroin; // Euro input
    int gramin; //Input Gram
    int kiloin; //OInput Kilo
    int ftoc; //Ferhentite to Celcius
    int ctof; //Celcius To ferhenite
    int usdtoind; //USD to IND 
    int indtousd; //IND to USD 
    int eurotoind; //EURO to IND
    int indtoeuro; //IND to Euro 
    int gramtokilo; //Gram to Kilo
    int kilotogram; //Kilo to Gram

printf("\n");
    printf(".... WELCOME TO UNIT CONVERTER ....\n");
    printf("-------------------------------------\n\n");
    printf("Choose Your Converter:-\n1. Tempreture Conveter\n2. Currency converter\n3. Weight Converter \n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        printf("\nWELCOME TO TEMPRETURE CONVERTER\n");
        printf("..................................\n\n");
        printf("Make Your Choice:-\n1. Ferhenite to Celcius\n2. Celcaius to Ferhenite\n");
        printf("Enter Your choice: ");
        scanf("%d",&tc);
        if(tc==1)
        {
            printf("You choose Ferhenite To Celcius.....\n");
            printf("Enter Temperature in Ferhenite: ");
            scanf("%d",&inf);
           ftoc = ((inf-32) * (5/9));
            printf("Answer of %d Ferhenite is %d Celcius",inf,ftoc);
        }else if (tc==2)
        {
            printf("\nYou Choose Celcius To Ferhenite....\n");
            printf("Enter Tempreture in Celcius: ");
            scanf("%d",&inc);
            ctof = ((9.0/5.0)*inc+32);
            printf("Answer of %d Celcius is %d Ferhenite",inc,ctof);
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
        scanf("%d",&cc);

        if(cc==1)
        {
            printf("\nYou Choose IND to USD....\n");
            printf("Enter Value Of IND: ");
            scanf("%d",&inind);
            indtousd = inind/79.81;
            printf("Value of %d IND is %d USD",inind,indtousd);
        }else if(cc==2)
        {
            printf("\nYou choose USD to IND....\n");
            printf("Enter Value in USD: ");
            scanf("%d",&usdin);
            usdtoind = usdin*79.81;
            printf("Value of %d USD is %d IND",usdin,usdtoind);
        }else if(cc==3)
        {
            printf("\nYou Choose IND to EURO....\n");
            printf("Enter Value in IND: ");
            scanf("%d",inind);
            indtoeuro = inind/79.25;
            printf("Value of %d IND is %d EURO",inind,indtoeuro);
        }else if(cc==4)
        {
            printf("\nYou Choose EURO to IND....\n");
            printf("Enter Value in EURO: ");
            scanf("%d",&euroin);
            eurotoind = euroin*79.25;
            printf("Value of %d EURO is %d IND",euroin,eurotoind);
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
        scanf("%d",&wc);
        if(wc==1)
        {
            printf("\nYou Choose Gram to KiloGram....\n");
            printf("Enter Value of Gram: ");
            scanf("%d",&gramin);
            gramtokilo = gramin/1000;
            printf("Weight of %d Grams is %d Kilogram",gramin,gramtokilo);
        }else if(wc==2)
        {
            printf("\nYou Choose KiloGram to Gram....\n");
            printf("Enter Value of KiloGram: ");
            scanf("%d",&kiloin);
            kilotogram = kiloin * 1000;
            printf("Weight of %d KiloGram is %d Grams",kiloin,kilotogram);
        }
    }else
    {
        printf("Enter Valid Command !!");
    }
    return 0;
}