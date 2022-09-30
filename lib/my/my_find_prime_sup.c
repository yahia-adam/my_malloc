/*
** EPITECH PROJECT, 2021
** df
** File description:
** fd
*/

int my_is_prime(int nb);

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1)
        return (nb);
    else
        return (nb + 1);
}
