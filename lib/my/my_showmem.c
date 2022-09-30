/*
** EPITECH PROJECT, 2021
** fghjk
** File description:
** ghj
*/

void my_put_nbr(int n);

void printmen(char const *str, int i)
{
    my_put_nbr(str[i]);
    my_put_nbr(str[i]);
}

int my_showmem(char const *str, int size)
{
    int end = 0;
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if ((i + 16) < size)
            printmen(str, i);
        else
            end = 1;
    }
    if (end == 1)
        my_put_nbr(str[i]);
    return (0);
}
