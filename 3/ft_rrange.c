#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int *range;
    int i = 0;
    int n = end - start + 1;

    if (start > end)
        return (ft_rrange(end, start));
    range = (int *)malloc(sizeof(int) * n);
    if (range)
    {
        while (i < n)
        {
            range[i] = start;
            start++;
            i++;
        }
    }
    return (range);
}
/*
int main()
{
    int *tab;
    int i;
    tab = ft_rrange(5, -5);
    while (i < 11)
    {
        printf("%d\n", tab[i]);
        i++;
    }
}
*/