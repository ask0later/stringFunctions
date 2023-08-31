#include <stdio.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* MyStrChr (const char* pts, int symbol);

int main()
{
    const char* pts = "You become responsib1e, forever, for what you have tamed";

    int symbol = '!';
    char* mystrchr;
    char* chr;

    mystrchr =  MyStrChr( pts, symbol );

    printf ("%s \n",mystrchr);

    if (mystrchr == NULL)
    {
        printf("my NULL\n");
    }
    else
    {
        printf("my %d\n",mystrchr - pts + 1);
    }

    chr = strchr(pts,  symbol);

    printf("function %d\n", chr - pts + 1);

}

char* MyStrChr (const char* pts, int symbol)
{
    assert(pts);

    int i = 0;

    while((pts[i] != symbol) && (pts[i] != '\0'))
    {
        i++;
    }
    int strlen_pts = strlen(pts);
    if (strlen_pts == i)
    {
        return NULL;
    }
    else
    {
        return (char*) &pts[i];
    }
}
