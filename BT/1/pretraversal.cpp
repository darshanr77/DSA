#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* leftChild;
    Node* rightChild;

    Node(int val){
        this->data = val; //data = val;
        leftChild = rightChild = NULL;
    };
};


static int idx = -1;

Node* BuildTree(vector<int> nodes){
    idx++;

    if(nodes[idx] == -1){
        return NULL;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->leftChild = BuildTree(nodes); // for left tree after call idx becomes ++ 
    currNode->rightChild = BuildTree(nodes); // for right sub tree

    return currNode;
}

void preOrderTraversal(Node* root){
    //bc
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preOrderTraversal(root->leftChild);
    preOrderTraversal(root->rightChild);
}

void postOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    postOrderTraversal(root->leftChild);
    postOrderTraversal(root->rightChild);
    cout << root->data << " ";
}

void inOrderTraversal(Node* root){
    if(root == NULL){
        return;
    }

    inOrderTraversal(root->leftChild);
    cout << root->data << " ";
    inOrderTraversal(root->rightChild);
}



int main () {

    vector<int> nodes = {1,2,4,-1,-1,5,-1,-1,3,-1,6,-1,-1};
    Node* root = BuildTree(nodes);

    preOrderTraversal(root);
    cout << endl;
    inOrderTraversal(root);
    cout << endl;
    postOrderTraversal(root);
  

    return 0;
}