// To find Sum of digits of a number.
#include <stdio.h>
int main() {
    int number, i, lastdigit, sum;
    printf("Enter the number of which you want to find sum of digits:- ");
    scanf("%d", &number);
    while (number != 0){
        lastdigit = number % 10 ;
        sum += lastdigit;
        number /= 10;
    }
    printf("sum of digits = %d", sum);
    return 0;
}
