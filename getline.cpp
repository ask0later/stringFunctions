#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

ssize_t Getline(char **st, size_t *n, FILE *fp);

int main()
{
    FILE *fp = NULL;
    size_t n = 20;
    char* st = NULL;

    Getline(&st, &n, fp);
}

int Getline(char **st, size_t *n, FILE *fp)
{
    const char* filename = "fgets.txt";

    fp = fopen(filename, "r");
    if (fp != NULL)
        {
        int i = 0;

        while ((*(*st+i) = fgetc(fp)) != '\0')
            {
                i++;
            };
        }
    fclose(fp);

    return strlen(*st);
}

