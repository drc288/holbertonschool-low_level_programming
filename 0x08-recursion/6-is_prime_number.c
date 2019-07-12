#include "holberton.h"

/**
<<<<<<< HEAD
  * _strpbrk - print the first charecter in array to the end
  *@s: The array
  *@accept: Accepts
  *
  *Return: char p whit address of &s[i]
  */

int _primo(n, a)
{
	if (n == a)
	{
		return (1);
	}
	if ()
=======
 * _primo - get the prime number
 *@n: prime number
 *@i: number of get the prime
 *
 *Return: the natural square root
 */

int _primo(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if ((n % i) == 0)
	{
		return (0);
	}
	else
	{
		return (_primo(n, (i + 1)));
	}
}

/**
 * is_prime_number - pint 1 if the number is prime
 *@n: n prime
 *
 *Return: 0 if  the number is not prime or 1 if the number is prime
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (_primo(n, 2));
	}
>>>>>>> 9e5b44ff276df0171904cc9b2deef7208c7bc6df
}
