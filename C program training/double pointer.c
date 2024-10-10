#include <stdio.h>

int main() {
    int a = 10;
    int *p;     
    int **q;    
    p = &a;    
    q = &p;    
    
    printf("\nValue of a = %d", **q); 
    
    return 0;
}
