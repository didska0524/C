#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int guess;
	int tries = 0;
	int aa = rand() % 100;


	do {
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;

		if (guess > aa)
			printf("������ ������ �����ϴ�.\n");
		if (guess < aa)
			printf("������ ������ �����ϴ�.\n");
	} while (guess != aa);

	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
	return 0;
}