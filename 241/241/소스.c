#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int i, ans;
	printf("��� ������ �ڵ����� �����մϴ�. \n");

	while (1)
	{
		int x = rand() % 10000;
		int y = rand() % 10000;
	
		printf("%d + %d = ", x, y);
		scanf("%d", &ans);

		if (x + y == ans)
		{
			printf("�¾ҽ��ϴ�.\n");
		}
		else
			printf("Ʋ�Ƚ��ϴ�.\n");
	}
	return 0;
}