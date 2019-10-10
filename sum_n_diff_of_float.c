#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n,m;
    float p,r;
    scanf("%d %d %f %f ",&n ,&m ,&p ,&r);
    printf("%d %d \n%.1f %.1f",(n+m),(n-m),(p+r),(p-r));
    return 0;
}
