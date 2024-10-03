// To print sum of first n numbers.
#include <stdio.h>
int main() {
    int n, i, sum;
    printf("enter number:- ");
    scanf("%d", &n);
    for (i = 0; i <= n; i++){
        sum += i;
    }
    printf("sum of all the numbers is %d", sum);
    return 0;
}
