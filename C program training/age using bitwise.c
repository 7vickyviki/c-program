#include<stdio.h>
int age(int);
int main()
{
    int a,b;
    printf("enter your age");
    scanf("%d",&a);
   b= age(a);
    if(b&1)
    printf("exam eligible");
    else
    printf("exam not eligible");
    
}
int age(int x)
{
    int y=x>=18;
    return y;
}