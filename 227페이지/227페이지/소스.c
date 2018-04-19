#include <stdio.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int guess;
	int tries = 0;
	int aa = rand() % 100;


	do {
		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		tries++;

		if (guess > aa)
			printf("제시한 정수가 높습니다.\n");
		if (guess < aa)
			printf("제시한 정수가 낮습니다.\n");
	} while (guess != aa);

	printf("축하합니다. 시도횟수=%d\n", tries);
	return 0;
}