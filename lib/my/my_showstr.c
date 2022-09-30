/*
** EPITECH PROJECT, 2021
** fghj
** File description:
** fghjk
*/

char my_putchar(char const c);

void print_hexa_char(char const c)
{
    int i = c;

    if (i < 10) {
        my_putchar('0');
        my_putchar((i + 48));
    } else {
        my_putchar('0');
        my_putchar(i + 87);
    }
}

int my_showstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 20 && str[i] >= 0) {
            my_putchar('\\');
            print_hexa_char(str[i]);
        } else
            my_putchar(str[i]);
    }
    return (0);
}
