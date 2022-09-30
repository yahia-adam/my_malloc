/**
 * @ Author: Yahia Abdchafee Adam
 * @ Create Time: 2022-09-22 21:33:37
 * @ Modified by: Yahia Abdchafee Adam
 * @ Modified time: 2022-09-28 03:10:14
 * @ Description:
 */

#include "stddef.h"
#include "my.h"
#include "my_malloc.h"

int main(void)
{
    char *str = my_malloc(sizeof(char) * 100000);

    for (int i = 0; i != 9999; i++)
        str[i] = 'a';
    my_putstr(str);
    return (0);
}
