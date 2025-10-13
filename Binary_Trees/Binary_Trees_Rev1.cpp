#include<iostream>
#include<queue>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        data = d;
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


// Zig-Zag Traversal:(0some kid of bug is there in the code):
vector<vector<int>> zigzagTraversal(Node*& root){
    bool lefttoright = 1;
    queue<Node*>q;
    q.push(root);
    vector<vector<int>> ans;
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0 ; i<size ; i++){
            Node* temp = q.front();
            q.pop();

            if(lefttoright){
                if(temp->left){
                    q.push(temp->left);
                    level.push_back(temp->data);
                }
                if(temp->right){
                    q.push(temp->right);
                    level.push_back(temp->data);
                }
            }else{
                    if(temp->right){
                    q.push(temp->right);
                    level.push_back(temp->data);
                }
                 if(temp->left){
                    q.push(temp->left);
                    level.push_back(temp->data);
                }
            }
            ans.push_back(level);
        }
    }
    return ans;
}

void VectorPrint(vector<vector<int>> arr){
    for(int i=0 ; i<arr.size() ; i++){
        int size = arr[i].size();
        for(int j=0 ; j<size ; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    // Creation of the binary tree:
    // 1 2 3 -1 -1 5 -1 -1 4 -1 6 7 -1 -1 8 -1 -1
    Node *root = BinaryTree();

    vector<vector<int>> arr = zigzagTraversal(root);
    VectorPrint(arr);



























    

    return 0;
}