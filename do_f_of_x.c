/*
** EPITECH PROJECT, 2023
** 110_borwein
** File description:
** do_f_of_x
*/
#include <math.h>

double do_f_of_x(double x, int n)
{
    double sum = 1;

    if (x >= -0.001 && x <= 0.001)
        return (1);
    for (int k = 0; k <= n; k++)
        sum = sum * (sin(x / (2 * k + 1)) / (x / (2 * k + 1)));
    return (sum);
}

double absf(double x)
{
    if (x > 0)
        return (x);
    return (x * (-1));
}
