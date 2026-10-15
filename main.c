/*
** EPITECH PROJECT, 2022
** star
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include "star.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int main(int ac, char **av)
{
    int size;

    if (ac != 2)
        return 84;
    size = atoi(av[1]);
    if (size <= 0)
        return 84;
    star((unsigned int)size);
    return 0;
}
