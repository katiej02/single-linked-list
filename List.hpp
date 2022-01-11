#ifndef LIST_H
#define LIST_H

class List{
	private:
		typedef struct node{
			int data{0};
			node* next; //pointer to the next node
		}* nodePtr;

		//struct node {
		//	int data;
		//	struct node *link;
		//}

		//typedef struct node* nodePtr;
		
		//nodePtr is the same as node* head
		nodePtr head; //point to the beginning of the list
		nodePtr curr;
		nodePtr temp;

	public: //this is where we put our function prototypes
		List(); //set initial values
		void AddNode(int addData);
		void DeleteNode(int delData);
		void DeleteAllNodes();
		void DisplayList();
};

#endif /*LIST_H*/
