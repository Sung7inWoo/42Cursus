int return_zero(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (((str[i] >= 48 && str[i] <= 57) && ((str[i - 1] < 9 || str[i - 1] > 13) && str[i - 1] != 32
        && (str[i - 1] < 48 || str[i - 1] > 57) && str[i - 1] != '-' && str[i - 1] != '+')))
            return (0);
        else if ((str[i] >= 48 && str[i] <= 57) && ((str[i - 1] == '-') || str[i - 1] == '+') && ((str[i - 2] == '-') || str[i - 2] == '+'))
            return (0);
        else    
            i++;
    }
    return (1);
}

int double_sign(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] == '-' || str[i] == '+') && (str[i + 1] == '-' || str[i + 1] == '+'))
            return (0);
        i++;
    }
    return (1);
}

int is_neg(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if ((str[i] >= 48 && str[i <= 57]) && (str[i - 1] == '-'))
            return (1);
    }
    return (0);
}

int is_not_num(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 48 && str[i] <= 57)
            return (0);
        i++;
    }
    return (1);
}

int ft_atoi(char *str)
{
    int i;
    int num;

    i = 0;
    num = 0;
    if (!((return_zero(str))) || (!(double_sign(str))) || (is_not_num(str)))
        return (0);
    while (str[i] < 48 || str[i] > 57)
        i++;
    while (str[i] >= 48 && str[i] <= 57)
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    if (is_neg(str))
        return (-num);
    return (num);
}

#include <stdio.h>
int main(void)
{
    char a[] = "       -234asdf2";
    char b[] = "asdf";
    char c[] = "   123asf132";
    char d[] = "      -+2345asf2";
    char e[] = "    ?1324";
    char f[] = "2134asdf";
    char g[] = "?1245as";
    char h[] = "-+12345";
    printf("%d\n", ft_atoi(a));
    printf("%d\n", ft_atoi(b));
    printf("%d\n", ft_atoi(c));
    printf("%d\n", ft_atoi(d));
    printf("%d\n", ft_atoi(e));
    printf("%d\n", ft_atoi(f));
    printf("%d\n", ft_atoi(g));
    printf("%d\n", ft_atoi(h));
}