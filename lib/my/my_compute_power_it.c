/*
** EPITECH PROJECT, 2021
** emacs
** File description:
** emacs
*/

int my_compute_power_it(int nb, int p)
{
    int result = nb;

    if (p == 0)
        return (1);
    if (p == 1)
        return (nb);
    if (p < 0)
        return (0);

    for (; p != 1; p--)
        result = result * nb;
    return (result);
}
