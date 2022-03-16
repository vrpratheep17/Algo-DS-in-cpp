#include<iostream>

using namespace std;

template<typename T>
class BTNode{
    public:
    T data;
    BTNode *left;
    BTNode *right;
    BTNode(T data){
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

template<typename T>
void printTree(BTNode<T> *root){
    if(!root){
        return;
    }
    cout << root->data << " :";
    if(root->left){
        cout << "L: " << root->left->data;
    }
     if(root->right){
        cout << "R: " << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}



int main(){

    BTNode<int> *root = new BTNode<int>(1);
    BTNode<int> *left = new BTNode<int>(2);
    BTNode<int> *right = new BTNode<int>(3);

    root->left = left;
    root->right = right;

    printTree<int>(root);

    return 0;
}