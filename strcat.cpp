#include <stdio.h>
#include <assert.h>
#include <string.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* Strcat(char* dst, const char *app);

int main()
{
    char dst[] = "privet ";
    const char app[] = "kak dela";

    puts(dst);
    puts(app);

    Strcat(dst, app);
    //strcat(dst, app);

    puts(dst);
    puts(app);
}

char* Strcat(char* dst, const char *app)
{
    assert(dst);
    assert(app);

    int dst_len = strlen(dst);

    for (int j = 0; ((app[j] != '\0') ); j++)
        dst[dst_len + j] = app[j];

    return dst;
}
