/*
** EPITECH PROJECT, 2022
** star
** File description:
** projet star
*/

#include "star.h"

void line_star(unsigned int size)
{
    int nb = (1 + 2 * size), i;
    for (i = 1; i <= nb; i++) {
        my_putchar('*');
    }
    for (i = 1; i <= 1 + 2 * (size - 2); i++) {
        my_putchar(' ');
    }
    for (i = 1; i <= nb; i++) {
        my_putchar('*');
    }
    my_putchar('\n');
}

void middle_top_star(unsigned int size)
{
    int i = 0;
    while (i < size) {
        i = i + 1;
        for (int j = 0; j < i; j++) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int sp = 0; sp < (9 + 6 * (size - 2)) - i * 2; sp++) {
            my_putchar(' ');
        }
        my_putchar('*'), my_putchar('\n');
    }
}

void middle_bottom_star(unsigned int size)
{
    int i = size;
    while (i > 1) {
        for (int j = i; j > 1; j--) {
            my_putchar(' ');
        }
        my_putchar('*');
        for (int sp = 0; sp < (11 + 6 * (size - 2)) - i * 2; sp++) {
            my_putchar(' ');
        }
        my_putchar('*'), my_putchar('\n');
        i = i - 1;
    }
}
