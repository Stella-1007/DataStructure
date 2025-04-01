#pragma once
// ���� ���Ḯ��Ʈ�� ����ü�� �����Ѵ�
typedef struct ListNode {
	struct ListNode* llink;   // ����(��,����) ��带 ����Ű�� ��ũ
	char data[4];
	struct ListNode* rlink;   // ����(��, ������) ��带 ����Ű�� ��ũ
} listNd

// ����Ʈ�� ������ head ��带 ����ü�� ����
typedef struct {
	listNode* head;
} linkedList_h;

linkedList_h* createLinkedList_h(void);
void printList(linkedList_h* DL);
void insertNode(linkedList_h* DL, listNode* pre, char* x);
void deleteNode(linkedList_h* DL, listNode* old);
listNode* searchNode(linkedList_h* DL, char* x);