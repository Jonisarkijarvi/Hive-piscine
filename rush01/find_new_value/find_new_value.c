int	find_new_value(int (*idata)[4], int (*odata)[4], int row, int col)
{
	int	i;
	int	aset;
	int	value;

	aset = (1, 2, 3, 4);
	i = 0;
	while (i < SIZE)
	{
		if (odata[row][i] > 0)
			aset[odata[row][i] - 1] = 0;
		if (odata[i][col] > 0)
			aset[odata[i][col] - 1] = 0;
		i++;
	}
	return (search_using_idata(idata, aset, row, col));
}
//missing type qualifier or identifier in funtion arguments line1, col 19&35
