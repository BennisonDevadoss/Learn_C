#include <stdio.h>
#include <stdlib.h>

struct student
{
    char Stud_Name[30];
    int Stud_No;
    int Stud_Marks[5];
    int Stud_Totals;
};

int main()
{
    struct student detail[5];

    FILE *fptr;
    int i, j;

    fptr = fopen("STUD_TETAIL", "w");
    if (fptr == NULL)
    {
        printf("file not created");
    }

    //read information
    for (size_t i = 0; i < 5; i++)
    {
        printf("STUDENT_NAME:");
        fgets(detail[i].Stud_Name, 30, stdin);
        printf("STUDENT_NO:");
        scanf("%d", detail[i].Stud_No);
        printf("STUDENT MARKS:");
        for (size_t j = 0; j < 5; j++)
        {
            scanf("%d", detail[i].Stud_Marks);
        }
        //print output
        for (size_t i = 0; i < 5; i++)
        {
            printf("FIRST_STUDENT_DETAIL:\n");
            puts(detail[i].Stud_Name);
            printf("\n");
            printf("%d\n", detail[i].Stud_No);
            printf("STUDENT_MARKS");
            for (size_t j = 0; i < 5; j++)
            {
                printf("%d", detail[i].Stud_Marks[i]);
            }
        }
    }
}
