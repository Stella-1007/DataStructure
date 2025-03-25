#include "listS.h"
int Insertelement(int L[], int n, int x) {
	int i,k = 0, move = 0;  //이동한 원소의 수 카운트가 move
	//ex) 30을 넣었을 때 적절한 위치를 찾기 위해 원소 1<x<2, 2<x<3...식으로 들어갈 위치를 찾음
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

	L[k] = x;	//비어있는 자리 k에 삽입할 원소 저장 
	return move;
}
int DeleteElement(int L[], int n , int x) {

	int i, k = n, move = 0;  
	//삭제도 똑같은 방식으로 지울 위치를 찾는다
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
	//삭제한 위치부터 앞으로 쭉 이동
	return move;
}