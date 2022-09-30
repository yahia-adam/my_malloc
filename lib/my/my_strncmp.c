/*
** EPITECH PROJECT, 2021
** ghj
** File description:
** ghjk
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int len_s1 = my_strlen(s1);
    int len_s2 = my_strlen(s2);

    if (len_s1 < n || len_s2 < n)
        return (0);
    for (int i = 0; i != n; i++) {
        if (s1[i] != s2[i])
            return (0);
    }
    return (1);
}
