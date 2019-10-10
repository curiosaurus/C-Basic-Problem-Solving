//print the array in reverse order
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *rarr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    rarr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
    for (i = 0; i<num ; i++){
        rarr[i]=arr[num-i-1];
    }
    for(i = 0; i < num; i++)
        printf("%d ", *(rarr + i));
    return 0;

}
