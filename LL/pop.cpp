#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* nextPointer;

    Node(int val){ // set the props which requires each single node
        data = val;
        nextPointer = NULL;
    }
};

// Push at Start
void push_front(Node*& head, int val) {
    Node* newNode = new Node(val);
    newNode->nextPointer = head;
    head = newNode;
}


void pop_back(Node*& head){
    if(head == NULL){  // if empty ll
        return;
    }
    if(head->nextPointer == NULL){ // if only one node is present in ll
        delete head;
        return;
    }

    Node* temp = head;      // temmp points to st node of ll

    while(temp->nextPointer->nextPointer != NULL){ // until st nodes next's next node is not empty
        temp = temp->nextPointer;            // moving temp to nxt node
    }
    delete temp->nextPointer;  // del that last node
    temp->nextPointer = NULL;  // assign nextpointer to last node
}

void printList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->nextPointer;
    }
    cout << "NULL\n";
}



int main() {

    Node* head = NULL;

    push_front(head,3);
    push_front(head,2);
    push_front(head,1);

    pop_back(head);

    printList(head);

 
    return 0;
}