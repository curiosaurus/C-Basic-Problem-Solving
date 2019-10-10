// input a five digit number and print the sum of digits of the number.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int n,sum,num,i;
    scanf("%d", &n);
    for (i=0;i<5;i++){
        num=n%10;
        n/=10;
        sum+=num;
    }
    printf("%d",sum);
    return 0;
}
