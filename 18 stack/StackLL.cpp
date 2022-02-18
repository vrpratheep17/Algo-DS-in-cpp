#include<iostream>

using namespace std;



template<typename T>
class Node{
    public:
        T head;
        Node *next;
        Node(T value)
        {
            this->head = value;
            this->next = nullptr;
        }
};

template<typename T>
class Stack{
    private:
        Node<T> *headofList;
        int sizeofList=0;
  
    public:
    void push(T value){
        Node<T> *n = new Node<T>(value);
        if(this->headofList==nullptr){
            this->headofList = n;
        }else{
            n->next = headofList;
            headofList = n;
        }
        this->sizeofList++;
    };
    bool isEmpty(){
        return this->sizeofList == 0;
    };

    void pop(){
        if(isEmpty()){
            cout << "Stack is Empty" << endl;
            return;
        }
        Node<T> *temp = headofList->next;
        delete headofList;
        headofList = temp;
        sizeofList--;
    };

    int size(){
        return this->sizeofList;
    };

    T head(){
        return this->headofList->head;
    };
};

int main(){

    Stack<int> S;
    
    S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.push(7);
     S.push(2);
    S.push(3);
    S.push(4);
    S.push(5);
    S.push(6);
    S.push(7);

    while(!S.isEmpty()){
        cout << S.head() << endl;
        S.pop();
    }

    return 0;
}
