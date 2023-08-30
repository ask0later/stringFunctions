#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* Strdup(const char* dst);

int main()
{
    char dst[] = "privet";
    puts(dst);
    puts(Strdup(dst));
}

char* Strdup(const char* dst)
{
    assert(dst);

    char* st = (char*)malloc((strlen(dst) + 1) * sizeof(char));

    if (st != NULL)
    {
        int i = 0;
        for (i = 0; dst[i] != '\0'; i++)
            st[i] = dst[i];

        st[i] = '\0';
    return st;
    }
    else
    {
        return NULL;
    }
}
