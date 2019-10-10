//To take a single character  as input, you can use scanf("%c", &ch ); and printf("%c", ch) writes a character specified by the argument char to stdout
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    char s[10];
    char sen[35];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%c",&ch);
    scanf("%s",&s);
    scanf("\n");
    scanf("%[^\n]%*c", &sen);
    printf("%c \n%s \n%s",ch,s,sen);   
    return 0;
}
