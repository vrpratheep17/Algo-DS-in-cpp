#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template <typename T>
class TreeNode{
    public:
        T data;
        vector<TreeNode<T> *> children;
    TreeNode(int data){
        this->data = data;
    }
};

//recursive function for input
template <typename T>
TreeNode<T> * insert(){
    T rootData;
    int n;
    cout << "Enter the Data";
    cin >> rootData;
    TreeNode<T> *root = new TreeNode<T>(rootData);
    cout << "Enter the number of children";
    cin >> n;
    for (int i = 0; i < n;i++){
       TreeNode<T> *child= insert<T>();
       root->children.push_back(child);
    }
    return root;
}

//iterative level wise input function
template<typename T>
TreeNode<T> *TakeInput(){
    T rootData;
    cout << "Enter the root data";
    cin >> rootData;
    TreeNode<T> *root = new TreeNode<T>(rootData);
    queue<TreeNode<T> *> Q;
    Q.push(root);

    while(!Q.empty()){
        TreeNode<T> *temp = Q.front();
        int n;
        Q.pop();
        cout << "Enter the number of children " << temp->data << " has ";
        cin >> n;
        for (int i = 1; i <= n;i++){
            T data;
            cout << "Enter " << i << "th child data";
            cin >> data;
            TreeNode<T> *child = new TreeNode<T>(data);
            temp->children.push_back(child);
            Q.push(child);
                }
    }

    return root;
}

void printTree(TreeNode<int> *root){
  
    //edge case
    if(root==nullptr){
        return;
    }

    cout << root->data << ":";
    for (int i = 0; i < root->children.size();i++){
        cout << root->children[i]->data << ", ";
    }
    cout << endl;

    for (int i = 0; i < root->children.size();i++){
        printTree(root->children[i]);
    }
}

//level order print
template<typename T>
void levelPrint(TreeNode<T> *root){
    if(!root){
        cout << "Tree is empty";
        return;
    }

    queue<TreeNode<T> *> Q;
    Q.push(root);
    while(!Q.empty()){
        TreeNode<T> *temp = Q.front();
        Q.pop();
        cout << temp->data << ": ";
        for (int i = 0; i < temp->children.size();i++){
            cout << temp->children[i]->data << ", ";
            Q.push(temp->children[i]);
        }
        cout << endl;
    }
}

template<typename T>
int countTree(TreeNode<T> *root, int count){
    if(root->children.size()==0){
        return 1;
    }
    for (int i = 0; i < root->children.size();i++){
        count = count + countTree(root->children[i], count);
    }
    return count;
}

template<typename T>
int height(TreeNode<T> *root){
    if(!root){
        return 0;
    }
    int mh = 0;
    for (int i = 0; i < root->children.size();i++){
        mh = max(mh, height(root->children[i]));
        
    }
    return mh + 1;
}

//delete tree
template<typename T>
void del(TreeNode<T> *root){
        if(!root){
            return;
        }
        for (int i = 0; i < root->children.size();i++){
            del(root->children[i]);
        }
        delete root;
}

int main(){
    // TreeNode<int> *root = new TreeNode<int>(1);
    // TreeNode<int> *n1 = new TreeNode<int>(2);
    // TreeNode<int> *n2 = new TreeNode<int>(3);

    // root->children.push_back(n1);
    // root->children.push_back(n2);
    TreeNode<int> *root = TakeInput<int>();
    
    levelPrint(root);

    cout << "count is " << countTree(root,0);
    cout << "Height is " << height(root);

    return 0;
}