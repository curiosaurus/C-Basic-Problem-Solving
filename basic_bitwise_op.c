/*
This challenge will let you learn about bitwise operators in C.

Inside the CPU, mathematical operations like addition, subtraction, multiplication and division are done in bit-level. To perform bit-level operations in C programming, bitwise operators are used which are explained below.

Bitwise AND operator & The output of bitwise AND is 1 if the corresponding bits of two operands is 1. If either bit of an operand is 0, the result of corresponding bit is evaluated to 0. It is denoted by &.

Bitwise OR operator | The output of bitwise OR is 1 if at least one corresponding bit of two operands is 1. It is denoted by |.

Bitwise XOR (exclusive OR) operator ^ The result of bitwise XOR operator is 1 if the corresponding bits of two operands are opposite. It is denoted by .
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int lim, int max) {
  int maxa=0,maxo=0,maxx=0,i,j;
  for (i=1;i<lim;i++){
      for(j=i+1;j<=lim;j++){
          int a=i&j;
          int o=i|j;
          int x=i^j;
          if(( a> maxa) && ( a< max) ){
              maxa = a;
          }
          if((o > maxo) && (o < max) ){
              maxo = o;
          }
          if((x > maxx) && (x < max) ){
              maxx=x;
          }
      }
  }
  printf("%d\n",maxa);
  printf("%d\n",maxo);
  printf("%d",maxx);
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
    return 0;
}
