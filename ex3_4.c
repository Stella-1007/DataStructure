#include <stdio.h>
#include "listS.h"

int main(void) {
	int list[MAX] = {10, 20, 40, 50, 60, 70, 80};
	int i,move = 6;
	int size = 7 ;
	printf("\n 원본 선형 리스트:");
	for (i = 0; i < size; i++) {
		printf("%3d", list[i]);
	}
	printf("\n 원소의 개수:%d \n", size);
	move = Insertelement(list, size, 30);

	printf("\n 삽입 작업 후 선형 리스트:");

	for (i = 0; i <= size; i++) {
		printf("%3d", list[i]);
	}
	printf("\n 원소의 갯수:%d ", ++size);
	printf("\n 이동 횟수:%d \n", move);

	move = DeleteElement(list, size, 30);
	if (move == size) printf("\n 삭제할 원소가 선형 리스트에 존재하지 않습니다.\n");
	else {
		printf("\n 원소 삭제 후 선형 리스트:");
		for (i = 0; i < size - 1; i++) {
			printf("%3d", list[i]);
		}
		printf("\n 현재 원소의 갯수:%d ", --size);
		printf("\n 이동 횟수: %d \n", move);
	}

	getchar();  return 0;
}