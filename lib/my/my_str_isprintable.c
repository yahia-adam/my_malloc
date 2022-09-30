/*
** EPITECH PROJECT, 2021
** fghj
** File description:
** ghj
*/

int my_strlen(char const *str);

int my_str_isprintable(char const *str)
{
    int i = 0;
    int len_str = my_strlen(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i] <= 20 && str[i] >= 0))
            break;
    }
    if (i == len_str)
        return (1);
    return (0);
}
