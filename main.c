/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "include/110.h"

static int my_str_is_float(char const *str)
{
    int i = 1;

    while (str[i] != '\0') {
        if (str[i] <= '9' && str[i] >= '0')
            i++;
        else
            return (0);
    }
    if (str[0] == '-')
        return (1);
    if (str[0] <= '9' && str[0] >= '0')
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (my_str_is_float(av[1]) == 0)
        return (84);
    if (atoi(av[1]) < 0)
        return (84);
    midpoint(atoi(av[1]));
    trapeze(atoi(av[1]));
    simpson(atoi(av[1]));
}