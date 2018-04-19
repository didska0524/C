#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int i, ans;
	printf("산수 문제를 자동으로 출제합니다. \n");

	while (1)
	{
		int x = rand() % 10000;
		int y = rand() % 10000;
	
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);

		if (x + y == ans)
		{
			printf("맞았습니다.\n");
		}
		else
			printf("틀렸습니다.\n");
	}
	return 0;
}