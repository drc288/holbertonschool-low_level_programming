/**
 * _isupper - print is upper te value
 * @c: Input value
 *
 * Return: On success 1 is uppercase if not, return 0.
 */

int _isupper(int c)
{
	int i, ret;

	ret = 0;
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			ret = 1;
		}
	}
	return (ret);
}
