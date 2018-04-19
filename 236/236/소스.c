// 중첩 for문을 이용하여 *기호를 사각형 모양으로 출력하는 프로그램
#include <stdio.h>

int main(void)
{
	int x, y;
	int a, b;

	for (y = 0;y < 5; y++)
	{
		for (x = 0;x < y + 1; x++)
			printf("*");

		printf("\n");

		if (y > 6)
			continue;
	}
	{
	for (b = 6;b < 0; b--)
	
		for (a = 0;a < b; a--)
			printf("*");

		printf("\n");
	}
	
	return 0;
}