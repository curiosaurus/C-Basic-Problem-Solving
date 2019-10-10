/*You have to complete the function void update(int *a,int *b), 
which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.*/
#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    
    int temp= *a;
    *a+=*b;
    *b= temp - *b;
    if (*b<0){
        *b = *b * -1;
    }
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
