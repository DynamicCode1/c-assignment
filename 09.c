// To count number of digits of a number.
#include <stdio.h>
int main() {
    int number, i;
    printf("enter the number you want to count digits of:- ");
    scanf("%d", &number);
    for (i = 0; number != 0 ; i++){
        number /= 10;
    }
    printf("The number of digits is = %d", i);
    return 0;
}
