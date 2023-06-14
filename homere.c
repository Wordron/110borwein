/*
** EPITECH PROJECT, 2023
** 110_borwein
** File description:
** homere
*/
#include <stdio.h>
#include "include/110.h"

double do_add_two(int n)
{
    double sum = 0;

    for (int i = 0; i <= 9999; i++)
        sum = sum + do_f_of_x(i * 0.5 + 0.25, n);
    return (sum);
}

double do_add_one(int n)
{
    double sum = 0;

    for (int i = 1; i <= 9999; i++)
        sum = sum + do_f_of_x(i * 0.5, n);
    return (sum);
}

double simpson(int n)
{
    double f = 1.0/12.0 * (do_f_of_x(0, n) + do_f_of_x(5000, n) + (2 * do_add_one(n)) + (4 * do_add_two(n)));

    printf("Simpson:\nI%i = %.10f\ndiff = %.10f\n", n, f, absf(f - (3.14159265358979323846 / 2)));
}
