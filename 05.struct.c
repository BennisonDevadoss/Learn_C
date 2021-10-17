#include <stdio.h>
#include <stdlib.h>
struct course
{
    int marks;
    char subject[30];
};

int main()
{
    struct course *ptr;
    int n, i;
    printf("Enter the number of records: ");
    scanf("%d", &n);

    // Memory allocation for noOfRecords structures
    ptr = (struct course *)malloc(n * sizeof(struct course));

     printf("Enter subject and marks:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%s", (ptr + i)->subject);
        scanf("%d", &(ptr + i)->marks);
    }

    printf("Displaying Information:\n");
    for (i = 0; i < n; ++i)
    {
        printf("%s\t", (ptr + i)->subject);
        printf("%d\n", (ptr + i)->marks);
    }

    free(ptr);

    return 0;
}