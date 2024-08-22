int	fill_data(int (*idata)[4], int (*odata)[4])
{
	int	row;
	int	col;
	int	value;

	row = 0;
	col = 0;
	while (col < 4)
	{
		while (row < 4)
		{
			if (odata[row][col] == 0)
			{
				value = find_new_value(idata, odata, row, col);
				if (value == 0)
				{
					if (row != 1 && (odata[row - 1][col] - 1) > 0)
					{
						odata[row - 1][col]--;
						value = find_new_value(idata, odata, row, col);
						if (value == 0)
						{
							return (1);
						}
					}
					else
					{
						odata[row][col] = value;
						row++;
					}
				}
				else
				{
					odata[row][col] = value;
					row++;
				}
			}
			else
			{
				row++;
			}
		}
		row = 0;
		col++;
	}
	return (0);
}
