// To find Reverse of a number.
#include <stdio.h>
int main() {
    int number, reverse, lastdigit;
    printf("Enter number to be reversed:- ");
    scanf("%d", &number);
    while(number != 0){
        lastdigit = number % 10;
        reverse = reverse*10+lastdigit;
        number /= 10;
    }
    printf("The reverse of given number is %d", reverse);
    return 0;
}
