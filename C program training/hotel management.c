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
        printf("Amount is $20");
        break;
         case 2:
        printf("You are selected Coffee\n");
          printf("Amount is $20");
        break;
         case 3:
        printf("You are selected Coldcoffee\n");
          printf("Amount is $20");
        break;
         case 4:
        printf("You are selected Milkshake\n");
          printf("Amount is $20");
        break;
        case 5:
        printf("it is not available in the menucard\n ");
        break;
    }
   printf("Enter your required quantity\n");
   scanf("%d",&q);
   Total=q*20;
   printf("Your total amount is=");
   printf("%d",Total);
    return 0;
}