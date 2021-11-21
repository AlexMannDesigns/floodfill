//function must accept **char arrary, t_point for dimensions, and t_point for starting point
//Fill the zone the start point is in, with char F
//Zones delimited horizontally and vertically by other characters OR array boundary

#include "flood_fill.h"

void	print_tab(char **tab, int y)
{
	int i = 0;
	while (i < y)
	{
		printf("%s\n", tab[i]);
		i++;
	}
}

char	**make_area(char **tab, int x, int y)
{
	char 	**res;
	int	i;
	int	j;

	res = (char **)malloc(sizeof(char *) * y);
	while (i < y)
	{
		res[i] = (char *)malloc(sizeof(char) * x);
		j = 0;
		while (j < x)
		{
			res[i][j] = tab[i][j];	
			j++;
		}
		i++;
	}
	return res;

}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	return;
}

int main(void)
{
	char **area;
	t_point size = {8,5};
	//t_point begin = {2, 2};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",	
	};
	area = make_area(zone, size.x, size.y);
	print_tab(zone, size.y);
	//flood_fill(area, size, begin);
	//printf("\n");
	//print_tab(area);
	return (0);
}
