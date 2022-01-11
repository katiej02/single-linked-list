#include <cstdlib> //malloc for creating nodes
#include <iostream>

#include "List.hpp"

using namespace std;

//constructor
List::List()
{
	head = NULL;
	curr = NULL;
	temp = NULL;
}

void List::AddNode(int addData)
{
	//create new node
	nodePtr n = new node;
	n->next = NULL;	   //find the node n is pointing to, access its next element and make that point to nothing
	n->data = addData; //data of new node

	//if we have a list already, we advance the current pointer from the front all the way to the last node
	if (head != NULL)
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = n;
	}
	else
	{
		head = n;
	}
}

void List::DeleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;

	//until it passed all through the list OR if the data of current pointer is not yet equal to given delData
	while (curr != NULL && curr->data != delData)
	{
		temp = curr;
		curr = curr->next;
	}

	//we passed through the list but we didn't found the data we're looking for
	if (curr == NULL)
	{
		cout << delData << " was not in the list!" << endl;
		delete delPtr; //avoid memory leak as program continues to run
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;

		if (delPtr == head)
		{
			head = head->next;
			temp = NULL;
		}

		delete delPtr;
		cout << "The value " << delData << " was deleted." << endl;
	}
}

void List::DeleteAllNodes()
{
	while (head != NULL)
	{
		node *temp = head;
		head = head->next;
		delete (temp);
	}

	cout << "All nodes are deleted successfully.\n";
}

void List::DisplayList()
{
	curr = head;
	while (curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}
