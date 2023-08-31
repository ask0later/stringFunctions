#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

char* StrnCpy(char* dest, char* src, size_t size);
//void PrintArray(char* src, char* dest);

// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

int main (void)
{
    size_t size = 3;
    char src[100] = "DDDDDDD ";
    char dest[sizeof(src) + 1] = "VVVVVVV";

    printf("dest = %s\n", dest);
    printf("src = %s\n", src);

    //strncpy(src, dest, 100);
    StrnCpy(dest, src, size);
    printf("dest = %s\n", dest);
    printf("src = %s\n", src);
}

char* StrnCpy(char* dest, char* src, size_t size)
{
    assert(src);
    assert(dest);

    int i;

    for (i = 0; ((i < size) && (src[i] != '\0')); i++)
        dest[i] = src[i];

    int fabs_ = fabs(strlen(src) - size);

    while (i < fabs_)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

/*void PrintArray(char* src, char* dest)
{
    for (size_t i = 0; src[i] != '\0'; i++)
        printf("%c", src[i]);

    printf("\n");

    for (size_t j = 0; dest[j] != '\0'; j++)
        printf("%c", dest[j]);

    printf("\n");
}*/
