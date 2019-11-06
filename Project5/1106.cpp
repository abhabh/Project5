#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int x, y;

	printf("두 정수를 입력하세요: ");
	scanf("%d %d", &x, &y);

	if (x > y)
	{
		printf("몫: %d 나머지: %d", x / y, x % y);
	}
	else if (y > x)
	{
		printf("몫: %d 나머지: %d", y / x, y % x);
	}

	return 0;
}