#include "listS.h"
int Insertelement(int L[], int n, int x) {
	int i,k = 0, move = 0;  //�̵��� ������ �� ī��Ʈ�� move
	//ex) 30�� �־��� �� ������ ��ġ�� ã�� ���� ���� 1<x<2, 2<x<3...������ �� ��ġ�� ã��
	for (i = 0; i < n; i++) {
		if (L[i] <= x && x <= L[i + 1]) {
			k = i + 1;
			break;
		}
	}
	if (i == n) {
		k = n;
	}
	for (i = n; i >k; i--) {
		L[i] = L[i - 1];
		move++;
	}

	L[k] = x;	//����ִ� �ڸ� k�� ������ ���� ���� 
	return move;
}
int DeleteElement(int L[], int n , int x) {

	int i, k = n, move = 0;  
	//������ �Ȱ��� ������� ���� ��ġ�� ã�´�
	for (i = 0; i < n; i++) {
		if (L[i] == x) {
			k = i;
			break;
		}
	}

	if (i == n) {
		move = n; 
	}
	for (i = k; i < n - 1; i++) {
		L[i] = L[i + 1];
		move++;
	}
	//������ ��ġ���� ������ �� �̵�
	return move;
}