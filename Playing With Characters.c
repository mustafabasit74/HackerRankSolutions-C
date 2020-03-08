#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char ch, s[30], sen[50];
    scanf("%c", &ch);
    scanf("\n");

    scanf("%s", &s);
    scanf("\n");
    
    scanf("%[^\n]", sen);

    printf("%c\n%s\n%s",ch,s,sen);


    return 0;
}

