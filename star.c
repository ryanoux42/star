/*
** EPITECH PROJECT, 2022
** star
** File description:
** projet star
*/

#include "star.h"

int my_condition(int k, int i)
{
    if (k == 0 || k == 2 * i - 2) {
        my_putchar('*');
    } else {
        my_putchar(' ');
    }
}

void top_star(unsigned int size)
{
    int nb = size,k = 0, sp = (4 + 2 * (size - 2)), i, j;
    for (i = 1; i <= nb; i++) {
        for (int p = 1; p <= sp; p++) {
            my_putchar(' ');
        }
        for (j = i; j < nb; j++) {
            my_putchar(' ');
        }
        while (k != (2 * i - 1)) {
            my_condition(k,i);
            k++;
        }
        k = 0;
        my_putchar('\n');
    }
}

void bottom_star(unsigned int size)
{
    int nb = size,k = 0, sp = (4 + 2 * (size - 2)), i, j;
    for (i = nb; i >= 1; i--) {
        for (int p = 1; p <= sp; p++) {
            my_putchar(' ');
        }
        for (j = nb; j > i; j--) {
            my_putchar(' ');
        }
        while (k != (2 * i -1)) {
            my_condition(k,i);
            k++;
        }
        k = 0;
        my_putchar('\n');
    }
}

int my_affichage(void)
{
    my_putchar(' '), my_putchar(' '), my_putchar(' ');
    my_putchar('*'), my_putchar('\n'), my_putchar('*');
    my_putchar('*'), my_putchar('*'), my_putchar(' ');
    my_putchar('*'), my_putchar('*'), my_putchar('*');
    my_putchar('\n'), my_putchar(' '), my_putchar('*');
    my_putchar(' '), my_putchar(' '), my_putchar(' ');
    my_putchar('*'), my_putchar('\n'), my_putchar('*');
    my_putchar('*'), my_putchar('*'), my_putchar(' ');
    my_putchar('*'), my_putchar('*'), my_putchar('*');
    my_putchar('\n'), my_putchar(' '), my_putchar(' ');
    my_putchar(' '), my_putchar('*'), my_putchar('\n');
}

void line_star(unsigned int size);

void middle_top_star(unsigned int size);

void middle_bottom_star(unsigned int size);

void star(unsigned int size)
{
    if (size == 1) {
        my_affichage();
    } else {
        top_star(size);
        line_star(size);
        middle_top_star(size);
        middle_bottom_star(size);
        line_star(size);
        bottom_star(size);
    }
}
