#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left , *right;

    Node(int value){
        data = value;
        left = right = NULL;
    }
};


// Creating a Binary Tree using Reccursion:
Node *BinaryTree(){
    int X;
    cout << "Enter the root element" << endl;
    cin >> X;
    if(X == -1){
        return NULL;
    }
    Node *temp = new Node(X);
    cout << "Enter the left element of " << temp -> data << endl;
    temp -> left = BinaryTree();
    cout << "Enter the right element of " << temp -> data << endl;
    temp -> right = BinaryTree();
    return temp;
}


// PREORDER Traversal
void PreOrder(Node *root){
    if(root == NULL){
        return;
    }
    cout << root -> data << " ";
    cout << " Enter the left child of:" << root->data << endl;
    PreOrder(root -> left);
    cout << " Enter the right child of:" << root->data << endl;
    PreOrder(root -> right);
}
 

// INORDER Traversal
void InOrder(Node *root){
    if(root == NULL){
        return;
    }
    InOrder(root -> left);
    cout << root -> data << " ";
    InOrder(root -> right);
}


// POSTORDER Traversal
void PostOrder(Node *root){
    if(root == NULL){
        return;
    }
    PostOrder(root -> left);
    PostOrder(root -> right);
    cout << root -> data << " ";
}


int main(){
//Creation of Binary Tree:

    // Declearing a Root Node:
    // queue<Node*> q;
    // int first , second;
    // int X;
    // cout << "Enter the root element:" << endl;
    // cin >> X;
    // Node *root = new Node(X); 
    // q.push(root);

    // while(!q.empty()){
    //     Node *temp = q.front();
    //     q.pop();
        
    //     //Insertion to the Left of the given node:
    //     cin >> first;
    //     cout << "Enter the value to the left" << endl;
    //     if(first != -1){
    //         temp -> left = new Node(first); 
    //         q.push(temp->left);
    //     }

    //     // Insertion to the right of the given node:
    //     cin >> first;
    //     cout << "Enter the value to the right" << endl;
    //     if(second != -1){
    //         temp -> right = new Node(second); 
    //         q.push(temp->right);
    //     }
    // }



    // Declearation of a Binary Tree another method(Reccursion):
    Node *root = BinaryTree();


    // Tree Traversal:
    // PreOrder:
    cout << "PreOrder Traversal:" << endl;
    PreOrder(root);
    cout << endl;

    // PostOrder:
    cout << "PostOrder Traversal:" << endl;   
    PostOrder(root);
    cout << endl;


    // InOrder:
    cout << "InOrder Traversal:" << endl;
    InOrder(root);
    cout << endl;





 

// cout << "Hello World" << endl;

    return 0;
}