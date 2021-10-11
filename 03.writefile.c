#include <stdio.h>

int main()
{
    //variable declaration
    char ch[500];
    FILE *fptr; //file pointer declaration

    //file open
    fptr = fopen("prog.txt", "w");

    //if file dont open program send this message
    if (fptr == NULL)
    {
        printf("ERROR!\n");
        printf("FILE did not created");
    }

    printf("enter the notes");
    fgets(ch, sizeof(ch), stdin);//read input

    //print input to file
    fprintf(fptr, "%s", ch);

    fclose(fptr); //file close
}