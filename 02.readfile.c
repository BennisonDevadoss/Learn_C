//read first line of file using c programming
#include <stdio.h>
#include <stdlib.h> //for exit() function
int main()
{
    //variable declaration
    char ch[500];
    FILE *fp; //declare file pointer
    
    //file open
    fp = fopen("program.txt", "r");

    //this condition check file opened or not
    if (fp == NULL)
    {
        printf("FILE didn't exit");
        exit(0);
    }

    //read input from a file
    fscanf(fp, "%[^\n]", ch);  //I don't understand %[^\n] this one: what is this %[^\n]   
    printf("Data_from_the_first_line %s\n", ch);

    //file close function
    fclose(fp);

    //optional
    return 0;
}
