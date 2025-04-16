#include <stdlib.h>
#include "stackL.h"

int isStackEmpty() {
	if (top == NULL) return 1;
	else return 0;
}

void push(element item) {
	stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
	// !!시험!! 동적할당 : 내가 지정한 사이즈를 메모리에 할당
	temp->data = item;
	temp->link = top;
	top = temp;
}

element pop() {
	element item;
	stackNode* temp = top;
	
	if (isStackEmpty()) {
		printf("\n\n Stack is empty! \n");
		return 0;
	}
	else {
		item = temp->data;
		top = temp->link;
		free(temp);
		return item;
		//!! 시험 !! pop이 작동하는 과정 
	}

}

element peek() {
	if (isStackEmpty()) {
		printf("\n\n Stack is empty! \n");
		return 0;
	}
	else {
		return (top->data);
	}
}

void printStack() {
	stackNode* p = top;
	printf("\n Stack [");
	while (p) {
		printf("%d", p->data);
		p = p->link;

	}
	printf("] ");
}