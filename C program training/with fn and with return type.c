//with function with return type
#include<stdio.h>
int main() 
{ 
	int a = 3, b = 2; 
	int c = sum(a, b); 
	printf("%d",c); 

	return 0; 
}
int sum(int x, int y) 
{ 
	int c; 
	c = x + y; 
return c; 
} 
