//this program we will allocate memory dinamicaly

#include <stdio.h>
#include <stdlib.h>

//struct data allocationi
struct course
{
    int mark;
    char subject[30];
};

int main()
{
    //variable declaration
    struct coures *ptr;
    int n, i;

    //read input from user
    printf("How many student record you are entered");
    scanf("%d", &n);

    //dynamic memory allocation
    ptr = (struct course *)malloc(n * sizeof(struct course));

    if (ptr == NULL)
    {
        printf("MEMORY_NOT_ALLOCATED_FOR_PTR");
        exit(0);
    }

    //read stuent data from user
    printf("enter student detail");
    for (i = 0; i < n; ++i)
    {
        scanf("%s", (ptr + i)->subject);
        scanf("%d", &(ptr + i)->mark);
    }

    // displaying message
    for (i = 0; i < n; ++i)
    {
        printf("%s\n", (ptr + i)->subject);
        printf("%d", &(ptr + i)->mark);
        printf("\n");
    }

    //memory free up
    free(ptr);
}