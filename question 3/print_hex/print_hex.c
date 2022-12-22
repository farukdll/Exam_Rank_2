#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int k = 0;
    while (str[i])
    {
        k = k * 10 + str[i] - '0';
        i++;
    }
    return (k);
}

void ft_hex(int n)
{
    if (n >= 16)
        ft_hex(n / 16);
    write(1, &"0123456789abcdef"[n % 16], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_hex(ft_atoi(av[1]));
    write(1, "\n", 1);
}
