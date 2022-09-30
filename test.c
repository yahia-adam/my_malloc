#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 5; i++) {
        char *ptr = malloc(50000);
        printf("Go memory! (address=%p)\n", ptr);
    }
}