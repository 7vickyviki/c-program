#include <stdio.h>

int main() {
    int num, n;
    printf("first num");
    scanf("%d", &num);
    printf("second no");
    scanf("%d", &n);
    num = num^n;
    n=n^num;
    num=num^n;
   // num |= (1 << n);
    printf("%d\n%d\n", num, n);
    return 0;
}
