#include<stdio.h>
int square(int);
int main()
{
    int a,b;
    printf("enter the square of any num:");
    scanf("%d",&a);
    b=square(a);
    printf("%d",b);
}
int square(int x)
{
    int y;
    y=x*x;
    return y;
}
