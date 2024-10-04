// To check for perfect number.
#include <stdio.h>
int main() {
    int number, i, sum=0;
    printf("enter a number to check if it's perfect:- ");
    scanf("%d", &number);
    for (i = 1; i < number; i++){
        if (number % i == 0){
            sum += i;
        }
    }
    if (sum == number){
        printf("%d is a perfect Number", number);
    }
    else{
        printf("%d is NOT a perfect number", number);
    }
    return 0;
}
