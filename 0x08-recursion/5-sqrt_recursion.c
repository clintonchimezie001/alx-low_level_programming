#include "main.h"
#include <stdio.h>

int int_sqrt(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to calculate the natural square root
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n)
{
        return (int_sqrt(n, 1));
}

/**
 * int_sqrt - Calculate natural square root
 * @n: number to calculate the square root
 * @i: iterate number
 *
 * Return: natural square root
 */
int int_sqrt(int n, int i)
{
        int sqrt = i * i;

        if (sqrt > n)
                return (-1);

        if (sqrt == n)
                return (i);

        return (int_sqrt(n, i + 1));
}
