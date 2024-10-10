#include<stdio.h>
int main()
{
    int i,q,Total;
    printf("Display the menucard");
    printf("\n1.coffee\n2.Tea\n3.Cold coffee\n4.Milkshake\n");
    printf("Enter your menu=");
    scanf("%d",&i);
    switch(i){
        case 1:
        printf("You are selected tea\n");
        printf("Amount is $20\n");
         printf("Enter the quantity=");
          scanf("%d",&q);
        printf("your total value is= %d",Total=q*20);
        break;
         case 2:
        printf("You are selected Coffee\n");
          printf("Amount is $25\n");
          printf("Enter the quantity=");
          scanf("%d",&q);
           printf("your total value is= %d",Total=q*25);
        break;
         case 3:
        printf("You are selected Coldcoffee\n");
          printf("Amount is $35\n");
          printf("Enter the quantity=");
          scanf("%d",&q);
           printf("your total value is= %d",Total=q*35);
        break;
         case 4:
        printf("You are selected Milkshake\n");
          printf("Amount is $15\n");
          printf("Enter the quantity=");
          scanf("%d",&q);
           printf("your total value is= %d",Total=q*15);
        break;
        case 5:
        printf("it is not available in the menucard\n ");
        break;
    }
   
    return 0;
}