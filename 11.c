#include <stdio.h>
int main() {
    int n, final = 0,digits = 0;
    scanf("%d", &n);
    int num = n;
    int digitcounter = num;
    while (digitcounter != 0){
            digits+= 1;
            digitcounter /= 10;
        }
    while( num != 0){
        int digit = num%10;
        int product = 1;
            for (int i = 0; i <digits; i++) product *= digit;
        final += product;
        num /= 10;
    }
    (final == n)?printf("Yes"):printf("No");
    return 0;
}
