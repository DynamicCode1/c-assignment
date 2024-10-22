// To solve Fibonacci series.
#include <stdio.h>
int main() {
    int n,i, nthdigit, nminus1 = 1, nminus2 = 0;
    printf("Enter a number upto which you want to print fibonacci series: ");
    scanf("%d", &n);
    printf("%d , %d, ", nminus2, nminus1);
    for(int i = 0; i<n ; i++){
        nthdigit = nminus1+nminus2;
        nminus2 = nminus1;
        nminus1 = nthdigit;
        printf("%d, ", nthdigit);
    }
    return 0;
}
