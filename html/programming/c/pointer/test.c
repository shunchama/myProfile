#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int inverse(char *c)
{
}

int main(void)
{
    int size = 0;
    scanf("%d", &size);
    int *array = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {
        array[i] = i;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d,", array[i]);
    }

    free(array);

    return 0;
}