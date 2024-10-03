// To print all ASCII values and corresponding characters.
#include <stdio.h>
int main(){
   int i;
   for(i = 0 ; i <= 255; i++){
       printf("%d=%c\t", i, i);
   }
    return 0;
}
