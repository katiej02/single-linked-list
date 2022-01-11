#include <iostream>
#include "List.hpp"

using namespace std;

int main(){
	List LinkedList;

	LinkedList.DisplayList();

	LinkedList.AddNode(3);
	LinkedList.AddNode(6);
	LinkedList.AddNode(9);

	LinkedList.DisplayList();

	LinkedList.DeleteNode(6);
	LinkedList.DisplayList();
	LinkedList.DeleteNode(10);

	LinkedList.DeleteAllNodes();
	
	return 0;
}
