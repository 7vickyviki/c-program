#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b,c;
	printf("Enter the a no:");
	scanf("%d",&a);
	printf("Enter the b no: ");
	scanf("%d",&b);
	printf("Before swap\n");
	printf("a value is %d\nb value is %d\n ",a,b);
	c=swap(a,b);
	printf("After swap\n");
	printf("a value is %d\n",b);
	printf("b value %d",c);
	return 0 ;
}
int swap(int a, int b)
{
	int c;
	c=a;
	a=b;
	b=c;
	return c ;
}
