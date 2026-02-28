#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
public:

    Node* head;
    Node* tail;

    List(){
        head = NULL;
        tail = NULL;
    }

    //printing list
    void printList(){
        while(head != NULL){
            cout << head->data << " ";
            head = head->next;
        }
        cout << "NULL\n";
    }

    // push front
    void push_front(int val){
        Node* newNode = new Node(val);  // dynamic
        // Node* newNode(val); // static 


        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    //push back
    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = tail->next;  // both are same  tail = newNode  bcoz tail is last element
        }
    }

    //pop front
    void push_mid(int val,int pos){
        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i=1; i<pos-1; i++){
            if(temp == NULL){
                cout << "invalid position\n";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;  // temp is at pos-1 and we are connecting with pos means right side then left
        temp->next = newNode;
    }

    temp = newNode; It DOES NOT change the linked list structure.
    temp->next = newNode; You are changing the structure of the linked list.

};




int main() {

    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(4);

    ll.push_mid(100,1);

    ll.printList();


    return 0;
}
