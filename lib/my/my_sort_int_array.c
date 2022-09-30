/*
** EPITECH PROJECT, 2021
** hrdfgyh
** File description:
** gh
*/

void my_swap(int *a, int *b);

int verify(int *tab, int size)
{
    int swap = 1;

    for (int i = 0; i != (size - 1); i++) {
        if (tab[i] > tab[i + 1]) {
            swap = 0;
            my_swap(&tab[i], &tab[i + 1]);
        }
    }
    return (swap);
}

void my_sort_int_array(int *tab, int size)
{
    int swap = 0;

    while (swap == 0)
        swap = verify(tab, size);
}
