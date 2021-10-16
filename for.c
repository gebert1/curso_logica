#include <stdio.h>

int main()
{
	int i = 0;
	int j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j <= i * 10; j++)
		{
			printf("%d ", j);
		}
		printf("\n\n");
	}
	
	return 0;
}
	