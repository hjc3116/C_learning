#include <stdio.h>
#include <stdlib.h>

//�������ݽṹ�� ���� forѭ�� �͵ݹ�




void PrintN(int N)
{
	int i;
	for (i = 1; i <= N; i++) {
		printf("%d\n", i);
	}
	return;
}
int main()
{
	
	int N;
	scanf_s("%d", &N);
	PrintN(N);
	
	return 0;
}
