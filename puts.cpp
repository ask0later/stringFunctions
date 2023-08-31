#include <stdio.h>
#include <assert.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline
int MyPuts(char* pts);

int main()
{
    char pts[] = "You become responsible, forever, for what you have tamed";

    MyPuts(pts);

    printf("new line\n");

    puts(pts);

    printf("new line\n");

}

int MyPuts(char* pts)
{
    if (pts != NULL)
    {
        int i = 0;

        for(i = 0; (pts[i]) != '\0'; i++)
        putchar(pts[i]);

        putchar('\n');
        return '\0';
    else
    {
        return EOF;
    }
}
