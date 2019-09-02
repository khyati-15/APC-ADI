#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

typedef struct ListNode listnode;

listnode* listnode_new(int val) {
	listnode* node = (listnode *) malloc(sizeof(listnode));
	node->val = val;
	node->next = NULL;
	return node;
}

void addNode(listnode* A, int i){
	listnode* temp = listnode_new(i);
	listnode* t = A;
	while(t->next != NULL){
		t = t->next;
	}
	t->next = temp;
}
listnode *temp;
 int check(listnode* p)
 {
     if(p==NULL)
     return 1;
     int result=check(p->next)&&(temp->val==p->val);
     temp=temp->next;
     return result;
 }
 
int checkPalindrome(listnode *head){
    temp=head;
    return check(head);
}

int main(){
	listnode *head=listnode_new(5);
	addNode(head,4);
	addNode(head,3);
	addNode(head,4);
	addNode(head,2);
	listnode *temp=head;
    if(checkPalindrome(head)){
        printf("Is Palindrome");
    }
    else
    printf("Not Palindrome");
	return 0;
}