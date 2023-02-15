unsigned    ft_strlen(char *str)
{
    unsigned int    i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

unsigned ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    j;
    unsigned int    len_s;
    unsigned int    len_d;

    i = 0;
    j = ft_strlen(dest);
    len_s = ft_strlen(src);
    len_d = ft_strlen(dest);
    if (size < 1)
        return (len_s + size);
    while (src[i] && j < size - 1)
    {
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    if (size < len_d)
        return (len_s + size);
    return (len_s + len_d);
}