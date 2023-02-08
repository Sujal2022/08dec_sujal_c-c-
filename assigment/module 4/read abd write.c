#include<stdio.h>
int main()
{
    FILE *fptr;
    char str[20];
    fptr = fopen("D:\module 4\read and write.txt", "r");
    printf("%s",fgets(str,15,fptr));
    fclose(fptr);
    return 0;
}
