
#include <stdio.h> 

int sum(int x, int y) 
{ 
	int c; 
	c = x * y; 
return c; 
} 
int main() 
{ 
	int a,b;
	printf("Enter a value=");
	scanf("%d",&a);
	printf("Enter b value=");
	scanf("%d",&b);
	int c = sum(a, b); 
	printf("%d*%d=%d", a, b, c); 

	return 0; 
}
