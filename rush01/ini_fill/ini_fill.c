void	ini_fill(int (*inarr)[4], int (*outarr)[4])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{
			if (inarr[i][j] == SIZE)
			{
				k = 0;
				while (k < SIZE)
				{
					if (i == 0)
						outarr[k][j] = k + 1;
					if (i == 1)
						outarr[SIZE - k -1][j] = k + 1;
					if (i == 2)
						outarr[j][k] = k + 1;
					if (i == 3)
						outarr[j][SIZE - k - 1] = k + 1;
					k++;
				}
			}
			if (inarr[i][j] == 1)
			{
				if (i == 0)
					outarr[0][j] = 4;
				if (i == 1)
					outarr[SIZE - 1][j] = 4;
				if (i == 2)
					outarr[j][0] = 4;
				if (i == 3)
					outarr[j][SIZE - 1] = 4;
			}
			j++;
		}
		i++;
	}
}	
