#include<stdio.h>
int main()
{
   int num,quantity,tot,i,veg;
   printf("if you want veg press 1 or press any num:");
   scanf("%d",&i);
   if(i==1)
   {
       printf("MENU\n");
       printf("1.samber=$30\n");
       printf("2.curd rice=$20\n");
       printf("3.veg biriyani=$50\n");
       printf(" 4.tomato rice=$50\n");
       printf("what you whant choose:");
       scanf("%d",&num);
       printf("enter the quntity:");
       scanf("%d",&quantity);
       printf("veg");
       switch(num)
       {
           case 1:
           tot=30*quantity;
           printf(" your selected samber\n");
           printf("the tot is %d",tot);
           break;
           case 2:
           tot=20*quantity;
           printf("your selected  curd rice\n");
           printf("the tot is %d",tot);
           break;
           case 3:
           tot=50*quantity;
           printf("your selected veg biriyani\n");
           printf("the tot is %d",tot);
           break;
           case 4:
           tot=50*quantity;
           printf("your selected tomato rice\n");
           printf("the tot is %d",tot);
           break;
           default:
           printf("out of stock");
           break;
           
       }
   }
   else
   {
       printf("non veg");
       printf("MENU\n");
       printf("1.cheiken biriyani=$80\n");
       printf("2.mutton biriyani=$100\n");
       printf("3.cheiken rice=$70\n");
       printf("what you whant choose:");
       scanf("%d",&num);
       printf("enter the quntity:");
       scanf("%d",&quantity);
          switch(num)
          {
              case 1:
              tot=80*quantity;
              printf("your selected cheiken biriyani\n");
              printf("the tot is %d",tot);
              break;
              case 2:
              tot=100*quantity;
              printf("your selected mutton biriyani\n");
              printf("the tot is %d",tot);
              break;
              case 3:
              tot=70*quantity;
              printf("your selectedcold cheiken rice\n");
              printf("the tot is %d",tot);
              break;
              default:
              printf("out of stock");
              break;
              
          }
   }
   return 0;
}
       
   
