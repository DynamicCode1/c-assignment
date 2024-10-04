// To find sum of all the odd & Even numbers less than 100.
#include <stdio.h>

int main() {
    int odd, even, i;
    for(i=1; i<=100; i+=2){
        odd += i;
    }
    printf("sum of all odd numbers = %d\n", odd);
    for(i=0; i<=100; i+=2){
        even += i;
    }
    printf("sum of all even numbers = %d", even);
    return 0;
}
