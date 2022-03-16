#include<iostream>

using namespace std;

template<typename T>
class Node{
    public:
        T head;
        Node *next;
    Node(T head){
        this->head = head;
        this->next = nullptr;
    }
};
template<typename T>
class QueueList{
    private:
        Node<T> *head=nullptr;
        int listSize=0;
        Node<T> *tail = nullptr;

    public:
        void push(T value)
        {
            Node<T> *n = new Node<T>(value);
            if(head==nullptr){
                head = n;
                tail = n;
            }else{
                tail->next = n;
                tail = n;
            }
            listSize++;
    }

    void pop(){
        Node<T> *temp = head;
        head = head->next;
        delete temp;
        listSize--;
    }

    int size(){
        return listSize;
    }

    bool isEmpty(){
        return listSize == 0;
    }

    int top(){
        return head->head;
    }

};

int main(){

    QueueList<int> Q1;
    Q1.push(5);
    Q1.push(6);
    Q1.push(7);
    Q1.push(8);
     Q1.push(9);
      Q1.pop();

     

      while(!Q1.isEmpty()){
          cout << Q1.top() << endl;
          Q1.pop();
      }
     // 6 -->7-->8-->9

     return 0;
}