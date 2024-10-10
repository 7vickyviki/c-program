#include <stdio.h>

int main() {
    int a, position;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the position of the bit: ");
    scanf("%d", &position);

    
    if((a >> position) & 1) {
        printf("The bit at position %d is 1\n", position);
    } else {
        printf("The bit at position %d is 0\n", position);
    }

    return 0;
}
