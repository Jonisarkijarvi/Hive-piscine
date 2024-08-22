int	search_using_idata(int (*idata)[4], int *aset, int row, int col)
{
	int	value;
	int	i;

	i = SIZE;
	while (i > 0)
	{
		value = aset[i - 1];
		if (value > 0)
		{
			if (value <= col + 1 + SIZE - idata[2][row] && value <= SIZE + idata[3][row] && value <= row + 1 + SIZE - idata[0][col] && value <= SIZE + idata[1][col])
				return (value);
		}
		i--;
	}
	return (0);
}
//line12 line too long
