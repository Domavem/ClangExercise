// C Program to Read a Line From a File and Display it
// C programming is awesome.
// I love C programming.
// How are you doing?
// Data from the file:
// C programming is awesome.

#include <stdio.h>

int main()
{

    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("program.txt", "r")) == NULL) //if pointer is null then program exists
    {
        printf("Error! opening file");
        exit(1);
    }
    //reads text until new line
    fscanf(fptr, "%[^\n]", c);
    printf("Data from the file:\n%s", c);
    fclose(fptr);

    return 0;
}
