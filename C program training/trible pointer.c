#include <stdio.h>

int main() {
    int a = 10;
    int *p;     
    int **q;
    int ***r;
    p = &a;    
    q = &p;    
    r=&q;
    printf("\nValue of a = %d", ***r); 
    
    return 0;
}
