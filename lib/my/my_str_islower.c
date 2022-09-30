/*
** EPITECH PROJECT, 2021
** fghj
** File description:
** fgh
*/

int my_strlen(char const *str);

int my_str_islower(char const *str)
{
    int i = 0;
    int len_str = my_strlen(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!(str[i] >= 'a' && str[i] <= 'z'))
            break;
    }
    if (i == len_str)
        return (1);
    else
        return (0);
}
