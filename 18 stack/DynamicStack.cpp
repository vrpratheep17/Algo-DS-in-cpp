#include<iostream>

using namespace std;

class DynamicStack{
    private:
        int capacity = 4;
        int *arr = new int[capacity];
        int nextIndex = 0;

    public:

    void push(int value){
        if(nextIndex==capacity){
            int *newArr = new int[2*capacity ];
            for (int i = 0; i < capacity;i++){
                newArr[i] = arr[i];
            }
           
            delete[] arr;
            arr = newArr;
             capacity = 2 * capacity;
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
        return arr[nextIndex];
    }
};

int main(){
    DynamicStack D1;
    for (int i = 0; i < 10;i++){
        D1.push(i);
    }

    //print the content of the stack
    for (int i = 0; i < 10;i++){
        cout << D1.top() << endl;
        D1.pop();
    }

        return 0;
}