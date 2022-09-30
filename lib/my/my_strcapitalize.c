/*
** EPITECH PROJECT, 2021
** fghjk
** File description:
** fghbjk
*/

char *verif_lower(int *i, char *str)
{
    if (str[*i + 1] >= 'a' && str[*i + 1] <= 'z') {
        str[*i + 1] = (str[*i + 1] - 32);
        *i++;
    }
}

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = (str[0] - 32);
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == ' ' || str[i] == '-')
        || (str[i] >= 7 && str[i] <= 13)) {
            str = verif_lower(&i, str);
        }
    }
    return (str);
}
