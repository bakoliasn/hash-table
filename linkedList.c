
#include<stdlib.h>
struct LinkedList{
	int datum;
	struct LinkedList
*next;
};
typedef struct LinkedList
*node;
node newNode(){
	node temp;
	temp = (node)malloc(sizeof(struct LibkedList))
	temp -> next = NULL;
	return temp;
	};
node add(node head, int val){
	node temp, parent;
	temp = createNode();
	temp -> datum = val;
	if(head == NULL){
		head = temp;
	} else {
		parent = head;
		while (parent-> next != NULL){
			p=p->next;
		}
		p->next=temp
	}
	return head;
}
