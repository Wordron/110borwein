/*
** EPITECH PROJECT, 2023
** trapeze.c
** File description:
** trapeze
*/
#include <math.h>
#include <stdio.h>
#include "include/110.h"

int trapeze(int n)
{
    double h = 0.5;
    double f = 0;

    for (double x = 0.00; x < 5000; x = x + 0.5) {
        f = f + (h * ((do_f_of_x(x, n) + do_f_of_x((x + h), n)) / 2));
    }
    printf("Trapezoidal:\nI%i = %.10f\ndiff = %.10f\n\n", n, f, absf(f - (3.14159265358979323846 / 2)));
}
