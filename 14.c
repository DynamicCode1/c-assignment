// To check for prime number.
#include <stdio.h>
int main() {
    int number,i, count;
    printf("Enter number you want to check:- ");
    scanf("%d", &number);
    for (i = 1; i<=number; i++){
        if(number % i == 0){
            count++;
        }
    }
    if(count == 2){
        printf("Yes, %d is a prime number", number);
    }
    else{
        printf("No, %d is not a prime number", number);
    }
    return 0;
}
