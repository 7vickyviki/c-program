#include<stdio.h>
int oddeven(int);
int main()
{
	int a,b;
	printf("Enter the a no:");
	scanf("%d",&a);
   b= oddeven(a);
    if(b==0)
    {
	printf("The value %d is even number",a);
    }
	else
	{
	printf("The value %d is odd number",a);
	}
	return 0 ;
}
int oddeven(int x)
{
  int y=x%2;
	return y ;
}
