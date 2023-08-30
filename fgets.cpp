#include <stdio.h>
#include <assert.h>
#include <string.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* Fgets(char* str, int n, FILE *fp);

int main()
{
    char str[100] = "";
    const int n = 3;
    FILE *fp = NULL;
    Fgets(str, n, fp);
}

char* Fgets(char* str, int n, FILE *fp)
{
    assert(str);

    const char* filename = "fgets.txt";

    if ((fp=fopen(filename, "r")) != NULL)
    {
        int i = 0;
        while (((str[i] = fgetc(fp)) != '\0') && (i < n - 1))
            {
                i++;
            }

        printf("text : %s", str);
    }
    fclose(fp);
    return str;
}
