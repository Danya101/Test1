# include <stdio.h>
int main()
{
	char a[999];
	char b;
	int j = 0;
	int schetchik = 0;
	int k = 0;
	int dl = 0;
	printf("Vvedite stroku\n");
	while ((b = getchar()) != '\n')
	{
		a[j] = b;
		j++;
	}
	a[j] = '\0';
	printf("Vvedite dlinu slova\n");
	scanf_s("%d", &dl);
	printf("Rezul'tat poiska:\n");
	for (int i = 0; i <= j; i++)
	{
		if (a[i] == ' ' || a[i] == '\0')
		{

			if ((i - schetchik) == dl)
			{

				for (k = schetchik; k <= i; k++)
					putchar(a[k]);
							
			}
			else
			{
				printf("\n--\n");
			}

			schetchik = i + 1;		
		}				

	}

	return 0;
}