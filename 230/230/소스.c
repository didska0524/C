#include <stdio.h>
int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 1; i <= 100000; i++)
		sum += i;

	printf("1���� 100000������ ������ ��= %d\n", sum);
	return 0;
}