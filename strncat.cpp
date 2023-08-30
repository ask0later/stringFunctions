#include <stdio.h>
#include <assert.h>
#include <string.h>

// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* Strncat(char* dst, const char *app, int size);

int main()
{
    int size = 3;
    char dst[] = "privet ";
    const char app[] = "kak dela";

    puts(dst);
    puts(app);

    Strncat(dst, app, size);
    //strncat(dst, app,3);

    puts(dst);
    puts(app);
}

char* Strncat(char* dst, const char *app, int size)
{
    assert(dst);
    assert(app);

    int dst_len = strlen(dst);

    for (int j = 0; ((app[j] != '\0') && (j < size)); j++)
        dst[dst_len + j] = app[j];

    return dst;
}

