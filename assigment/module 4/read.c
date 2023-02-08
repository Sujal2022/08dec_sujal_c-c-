#include<stdio.h>
int main()
{
    FILE *fptr;
    char  str2[20] = {"sujal khunt"};
    fptr = fopen("D:/module 4/read.txt", "w");
    fprintf(fptr,"%s",str2);
    fclose(fptr);
    
}
