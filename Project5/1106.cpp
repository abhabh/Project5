#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int x, y;

	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d", &x, &y);

	if (x > y)
	{
		printf("��: %d ������: %d", x / y, x % y);
	}
	else if (y > x)
	{
		printf("��: %d ������: %d", y / x, y % x);
	}

	return 0;
}