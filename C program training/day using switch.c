#include<stdio.h>
int main()
{
    int i;
    printf("Enter the day=");
    scanf("%d",&i);
    switch(i){
        case 1:
        printf("day is monday");
        break;
         case 2:
        printf("day is Tuesday");
        break;
         case 3:
        printf("day is Wednesday");
        break;
         case 4:
        printf("day is Thursday");
        break;
         case 5:
        printf("day is Friday");
        break;
         case 6:
        printf("day is Saturday");
        break;
         case 7:
        printf("day is Sunday");
        break;
         case 8:
        printf("invaild day number ");
        break;
    }
    return 0;
}