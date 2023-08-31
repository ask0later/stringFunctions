#include <stdio.h>
#include <assert.h>
#include <string.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* Fgets(char* str, int n, FILE *fp);

int main(int argc, char* argv[])
{
    char str[100] = "";
    const int n = 3;
    const char* filename = argv[1];
    FILE *fp = fopen(filename, "r");
    Fgets(str, n, fp);
}

char* Fgets(char* str, int n, FILE *fp)
{
    assert(str);

    if (fp != NULL)
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
