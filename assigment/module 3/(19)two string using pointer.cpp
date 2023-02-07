#include <stdio.h>
 
int main()
{
    char str1[50], str2[50];
    char * s1 = str1;
    char * s2 = str2;
 
    printf("Enter 1st string: ");
    gets(str1);
    printf("Enter 2nd string: ");
    gets(str2);
 
    while(*(++s1));
 
    while(*(s1++) = *(s2++));
 
    printf("Concatenated string: %s", str1);
 
    return 0;
}
