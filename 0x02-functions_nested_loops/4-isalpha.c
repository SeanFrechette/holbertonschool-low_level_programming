int _isalpha(int c)
{
	int ch = c;

	if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
	{
		return (1);
	}
	return (0);
}
