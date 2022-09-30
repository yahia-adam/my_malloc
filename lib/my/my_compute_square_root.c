/*
** EPITECH PROJECT, 2021
** dfg
** File description:
** gfd
*/

int my_compute_square_root(int nb)
{
    int midle = nb / 2;
    int i = 0;

    while (i != midle) {
        if (((i * i) == nb)) {
            return (i);
        }
        i++;
    }
    return (0);
}
