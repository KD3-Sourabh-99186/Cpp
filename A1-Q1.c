#include<stdio.h>
#include<string.h>
struct Date{
    char day[15];
    int month;
    int year;
};

void initDate(struct Date* ptrDate){
    strcpy(ptrDate->day,"sunday");
    ptrDate->month=1;
    ptrDate->year=2000;
}
void printDateOnConsole(struct Date* ptrDate){
    printf("%s : %d : %d \n",ptrDate->day,ptrDate->month,ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate){
    printf("Enter day : ");
    scanf("%15s",ptrDate->day);
    printf("Enter month : ");
    scanf("%d",&ptrDate->month);
    printf("enter year : ");
    scanf("%d",&ptrDate->year);
}

int main(){
    int x=5;
    struct Date d;
    initDate(&d);
    while(x!=3){
       //show menu
       printf("For priniting Date enter 1\n");
       printf("For priniting accepting enter 2\n");
       printf("For exiting enter 3\n");
       scanf("%d",&x);

       switch(x){
        case 1:
           printDateOnConsole(&d);
           break;
        case 2:
           acceptDateFromConsole(&d);
           break;
        case 3:
           printf("Thank You");
       }
    }
    return 0;
}