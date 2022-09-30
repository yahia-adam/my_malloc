/**
 * @ Author: Yahia Abdchafee Adam
 * @ Create Time: 2022-09-22 21:53:29
 * @ Modified by: Yahia Abdchafee Adam
 * @ Modified time: 2022-09-28 02:55:47
 * @ Description: Run
 */

#include "stddef.h"
#include "stdio.h"
#include "unistd.h"

void *my_malloc(size_t size)
{
    void *pointer;
    pointer = sbrk(0);

    if (sbrk(size) == (void*)-1)
        return NULL;
    return (pointer);
}
