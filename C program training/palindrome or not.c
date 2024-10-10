
#include <stdio.h>

int main()
{
    int m,n,s=0,r;
    printf("enter the number");
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
    r=n%10;
    s=(s*10)+r;
    n=n/10;
    }
    if(s==m)
    printf("palindrome"); 
    else
        printf("not palindrome");
    return 0;
}