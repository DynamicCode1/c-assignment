// To find Factorial of a number
#include <stdio.h>
int main() {
    int n , i, factorial=1;
    printf("Write the Number you want to find Factorial of:- ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        factorial *= i;
    }
    printf("Factorial is = %d", factorial);
    return 0;
}
