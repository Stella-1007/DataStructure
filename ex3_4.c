#include <stdio.h>
#include "listS.h"

int main(void) {
	int list[MAX] = {10, 20, 40, 50, 60, 70, 80};
	int i,move = 6;
	int size = 7 ;
	printf("\n ���� ���� ����Ʈ:");
	for (i = 0; i < size; i++) {
		printf("%3d", list[i]);
	}
	printf("\n ������ ����:%d \n", size);
	move = Insertelement(list, size, 30);

	printf("\n ���� �۾� �� ���� ����Ʈ:");

	for (i = 0; i <= size; i++) {
		printf("%3d", list[i]);
	}
	printf("\n ������ ����:%d ", ++size);
	printf("\n �̵� Ƚ��:%d \n", move);

	move = DeleteElement(list, size, 30);
	if (move == size) printf("\n ������ ���Ұ� ���� ����Ʈ�� �������� �ʽ��ϴ�.\n");
	else {
		printf("\n ���� ���� �� ���� ����Ʈ:");
		for (i = 0; i < size - 1; i++) {
			printf("%3d", list[i]);
		}
		printf("\n ���� ������ ����:%d ", --size);
		printf("\n �̵� Ƚ��: %d \n", move);
	}

	getchar();  return 0;
}