// WAP to print all possible prime numbers starting from 0 to N. 
#include <stdio.h>
int main() {
    int n, i, j, count;
    printf("Enter Numbers up till you want to see prime of:- ");
    scanf("%d", &n);
    for (i = 2; i < n; i++){
        count = 0;
        for(j = 1; j <= i; j++){
            if(i % j == 0){
                count++;
            }
        }
        if (count == 2){
            printf("%d\t", i);
        }
    }
    return 0;
}
