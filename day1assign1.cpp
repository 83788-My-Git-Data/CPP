#include<iostream>
#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;

};


void initDate(struct Date* ptrDate)
{
ptrDate->day=15;
ptrDate->month=04;
ptrDate->year=2024;

}

void printDateOnConsole(struct Date* ptrDate)
{
 printf("date is:%d %d %d",ptrDate->day,ptrDate->month,ptrDate->year);
}

void acceptDateFromConsole(struct Date* ptrDate)
{
    printf("enter day, month ,year:");
    scanf("%d%d%d",&ptrDate->day,&ptrDate->month,&ptrDate->year);
}

int main(){

    int choice;
    struct Date d1;
    initDate(&d1);
    printDateOnConsole(&d1);
    // acceptDateFromConsole(&d1);

    do{

        printf( "0. EXIT ");
         printf("1. Accept Date" );
        printf("2. Display Date ");
         printf("Enter your choice  - ");
         scanf("%d",&choice);
        
        
        switch(choice)
        {
            case 0:
            printf("thanks for using our App!");
            break;
            case 1:
                 acceptDateFromConsole(&d1);
                 break;
            case 2: 
                printDateOnConsole(&d1);
                break;

        }
    }while( choice !=0);


    return 0;
}