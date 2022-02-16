#include<iostream>

using namespace std;

class Stack{
    private:
        int *arr;
        int nextIndex;
        int capacity;
    public:
        Stack(){
            capacity = 4;
            arr = new int[capacity];
            nextIndex = 0;
        }
        Stack(int value){
            capacity = value;
            arr = new int[capacity];
            nextIndex = 0;
        }

        void push(int value){
            if(nextIndex==capacity){
                cout << "Stack is full" << endl;
                return;
            }
            arr[nextIndex] = value;
            nextIndex++;
        }

        bool isEmpty(){
            return nextIndex == 0;
        }

        void pop(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
                return;
            }
            nextIndex--;
        }

        int top(){
            if(isEmpty()){
                cout << "Stack is empty" << endl;
                return -1;
            }
            return arr[nextIndex - 1];
        }
};

int main(){
    Stack S1(10);
    for (int i = 0; i < 10;i++){
        S1.push(i);
    }

    //to print the stack
    // while(!S1.isEmpty()){
    //     cout << S1.top() << endl;
    //     S1.pop();
    // }

    cout << S1.isEmpty() << endl;
    
    return 0;
}