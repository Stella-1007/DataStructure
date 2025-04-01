#pragma once
// 이중 연결리스트를 구조체로 정의한다
typedef struct ListNode {
	struct ListNode* llink;   // 선행(앞,왼쪽) 노드를 가리키는 링크
	char data[4];
	struct ListNode* rlink;   // 후위(뒤, 오른쪽) 노드를 가리키는 링크
} listNd

// 리스트의 시작인 head 노드를 구조체로 정의
typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void printList(linkedList_h* DL);
void insertNode(linkedList_h* DL, listNode* pre, char* x);
void deleteNode(linkedList_h* DL, listNode* old);
listNode* searchNode(linkedList_h* DL, char* x);