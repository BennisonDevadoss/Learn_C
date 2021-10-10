//this program displays this programs source code
#include <stdio.h>
int main()
{
    //variable declaration
    int ch;
    FILE *fp; //this file pointer

    //open current input files
    fp = fopen(__FILE__, "r"); // __FILE__ indicate current file.

    do
    {
        ch = getc(fp); //read character
        putchar(ch);   //display character
    } while (ch != EOF);

    fclose(fp); //file close

    return 0;
}