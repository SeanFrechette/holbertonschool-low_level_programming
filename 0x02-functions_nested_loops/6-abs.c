/**
 * _abs - returns absolute value of i
 * @i: input
 * Return: abs of i
 */
int _abs(int i)
{
	int num = i;

	if (num > 0)
	{
		return (num);
	}
	else if (num < 0)
	{
		return (num * -1);
	}
	else
	{
		return (num);
	}
}
