#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
	int data;
	struct Node* next;
} Node;

// function to insert in list
void insert(int x, Node** head)
{
	if (*head == NULL) {
		*head = (Node*)malloc(sizeof(Node));
		(*head)->data = x;
		(*head)->next = NULL;
		return;
	}
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = (*head)->data;
	temp->next = (*head)->next;
	(*head)->data = x;
	(*head)->next = temp;
}

// function to print the list
void print(Node* head)
{
	Node* temp = head;
	while (temp != NULL) {
		printf("%d ", temp->data);
		temp = temp->next;
	}
}

Node* merge(Node* firstNode, Node* secondNode)
{
	Node* merged = (Node*)malloc(sizeof(Node));
	Node* temp = (Node*)malloc(sizeof(Node));

	// merged is equal to temp so in the end we have the top
	// Node.
	merged = temp;

	// while either firstNode or secondNode becomes NULL
	while (firstNode != NULL && secondNode != NULL) {

		if (firstNode->data <= secondNode->data) {
			temp->next = firstNode;
			firstNode = firstNode->next;
		}

		else {
			temp->next = secondNode;
			secondNode = secondNode->next;
		}
		temp = temp->next;
	}

	// any remaining Node in firstNode or secondNode gets
	// inserted in the temp List
	while (firstNode != NULL) {
		temp->next = firstNode;
		firstNode = firstNode->next;
		temp = temp->next;
	}

	while (secondNode != NULL) {
		temp->next = secondNode;
		secondNode = secondNode->next;
		temp = temp->next;
	}
	// return the head of the sorted list
	return merged->next;
}

// function to calculate the middle Element
Node* middle(Node* head)
{
	Node* slow = head;
	Node* fast = head->next;

	while (!slow->next && (!fast && !fast->next)) {
		slow = slow->next;
		fast = fast->next->next;
	}
	return slow;
}

// function to sort the given list
Node* sort(Node* head)
{

	if (head->next == NULL) {
		return head;
	}

	Node* mid = (Node*)malloc(sizeof(Node));
	Node* head2 = (Node*)malloc(sizeof(Node));
	mid = middle(head);
	head2 = mid->next;
	mid->next = NULL;
	// recursive call to sort() hence diving our problem,
	// and then merging the solution
	Node* finalhead = merge(sort(head), sort(head2));
	return finalhead;
}

int main(void)
{
	Node* head = NULL;
	int n[] = { 7, 10, 5, 20, 3, 2 };
	for (int i = 0; i < 6; i++) {
		insert(n[i], &head); // inserting in the list
	}
	printf("Sorted Linked List is: \n");
	print(sort(head)); // printing the sorted list returned
					// by sort()
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
