#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch;
    scanf("%c", &ch);
    scanf("\n");
    char s[100];
    scanf("%[^\n]%*c", &s);
    scanf("\n");
    char sen[100];
    scanf("%[^\n]%*c", &sen);

    printf("%c\n", ch);
    printf("%s", s);
    printf("\n");
    printf("%s", sen);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
