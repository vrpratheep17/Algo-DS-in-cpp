#include<iostream>

using namespace std;

template<typename T>
class Stack{
    private:
        T *arr;
        int nextIndex = 0;
        int capacity = 4;
    public:
        void push(T value){
            if(nextIndex>=capacity){
                T *temp = new T[capacity * 2];
                for (int i = 0; i < capacity;i++){
                    temp[i] = arr[i];
                }
                delete[] arr;
                arr = temp;
                capacity = capacity * 2;
            }
            arr[nextIndex] = value;
            nextIndex++;
        }
        bool isEmpty(){
            return nextIndex == 0;
        }
        T pop(){
            if(isEmpty()){
                cout << "Stack is empty";
                return 0;
            }
            nextIndex--;
        }

        T head(){
            if(isEmpty()){
                cout << "Stack is empty";
                return 0;
            }
            return arr[nextIndex - 1];
        }
};

int main(){

    Stack<char> S;
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