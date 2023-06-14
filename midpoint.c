/*
** EPITECH PROJECT, 2023
** midpoint.c
** File description:
** midpoint
*/
#include <math.h>
#include <stdio.h>
#include "include/110.h"

int midpoint(int n)
{
    double h = 0.5;
    double f = 0;

    for (double x = 0.00; x < 5000; x = x + 0.5) {
        f = f + (h * do_f_of_x((x + 0.25), n));
    }
    printf("Midpoint:\nI%i = %.10f\ndiff = %.10f\n\n", n, f, absf(f - (3.14159265358979323846 / 2)));
}