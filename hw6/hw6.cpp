#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
	Node* prev;
};
Node* creatlist();

int main()
{
	Node* temp;
	Node* head = creatlist();
	temp = head;

	
	while (temp->next!=NULL)
	{
		cout << temp->data << endl;
		temp = temp->next;
		if (temp->next == NULL)
		{
			cout << temp->data << endl;
		}
	}

}

Node* creatlist()
{
	Node* currentNode = new Node, * head = NULL;
	char exit;

	do
	{
		if (!head)
		{
			currentNode = new Node;
			head = currentNode;
		}
		else
		{
			currentNode->next = new Node;
			currentNode = currentNode->next;
		}
		cout << "\nplease enter number\t";
		cin >> currentNode->data;

	} while (currentNode->data != 5);
	currentNode->next = NULL;
	return head;

}