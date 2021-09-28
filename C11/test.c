int incr(int a)
{
	a *= 2;
	return (a);
}
#include <stdio.h>
int	main()
{
	int tab[4] = {1, 2, 32, 45};
	int *tab2;
	int i = 0;

	tab2 = ft_map(tab, 4, &incr);
	while(tab2[i])
		printf("%d\n", tab2[i++]);
}

int incr(int a, int b)
{
	return (b - a);
}
#include <stdio.h>
int	main()
{
	int tab[4] = {1, 5, 7, 6};
	int i = 0;

	printf("%d\n", ft_is_sort(tab, 4, &incr));

}

#include <stdio.h>

int main (void)
{
	int i = 0;
	char *c[5] = {"b", "z", "cd", "a"};
	ft_sort_string_tab(c);
	while (c[i])
	{
		printf("%s\n", c[i]);
		i++;
	}
}	

int incr(int a, int b)
{
	if (a > b)
		return (1);
	if (a < b)
		return (-1);
	return (0);
}
#include <stdio.h>
int	main()
{
	int tab[6] = {5, 5, 5, 6, 7};
	int i = 0;

	printf("%d\n", ft_is_sort(tab, 5, &incr));

}