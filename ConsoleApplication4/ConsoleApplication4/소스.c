#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int user, computer;

	printf("����, ����, �� ���ӿ� ���� ���� ȯ���մϴ�. \n");
	printf("�ϳ��� �����ϼ���(����-0, ����-1, ��-2): ");
	scanf("%d", &user);

	srand(time(NULL));
	computer = rand() % 3;
	printf("�����=%d \n", user);
	printf("��ǻ��=%d \n", computer);

	if (rand() % 3 == computer)
		printf("��ǻ�� �¸� \n");
	else if (computer == user)
		printf("����� \n");
	else
		printf("����� �¸� \n");

	return 0;
}