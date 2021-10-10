//read first line of file using c programming
#include <stdio.h>
#include <stdlib.h> //for exit() function
int main()
{
    //variable declaration
    char ch[500];
    FILE *fp; //declare file pointer

    fp = fopen("program.txt", "r");

    //this condition check file opened or not
    if (fp == NULL)
    {
        printf("FILE didn't exit");
        exit(0);
    }

    //read input from a file
    fscanf(fp, "%[^\n]", ch);
    printf("Data_from_the_first_line %s", ch);

    //file close function
    fclose(fp);

    //optional
    return 0;
}