// To find exponent.
#include <stdio.h>
int main() {
    int base, exponent, result=1;
    printf("Enter base Value:- ");
    scanf("%d", &base);
    printf("Enter exponent Value:- ");
    scanf("%d", &exponent);
    for (;exponent > 0; exponent--){
        result *= base;
    }
    printf("%d", result);
    return 0;
}
