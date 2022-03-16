#include<iostream>

using namespace std;
template<typename T>
class Queue{
    private:
        int capacity = 0;
        T *arr=new T[capacity];
        int firstIndex = 0;
        int nextIndex = 0;
        int sizeL = 0;

    public:
    Queue(T capacity){
        delete arr;
        this->capacity = capacity;
        this->arr = new T[capacity];
    }

    int size(){
        return sizeL;
    }

    int head(){
        if(this->sizeL==0){
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[firstIndex];
    }

    void push(int value){
        if(sizeL<capacity){
            arr[nextIndex] = value;
            nextIndex++;
            sizeL++;
        }else{
            cout << "size is full";
        }
    }

    bool isEmpty(){ 
        return sizeL == 0;
    }
    void pop(){
        if(isEmpty()){
            cout << "Queue is Empty" << endl;
            return;
        }
        
            firstIndex++;
            sizeL--;
       
        if(this->sizeL==0){
            nextIndex = 0;
            firstIndex = 0;
        }
    }
};

int main(){

    Queue<int> Q(5);
   
   
    Q.push(1);
    Q.push(2);
    Q.push(3);
    Q.push(4);
    Q.push(5);
    Q.push(6);
    Q.push(7);
    cout << endl;

    cout << Q.head() << endl;
    Q.pop();
    Q.pop();
    Q.pop();
    cout << Q.head() << endl;
    cout << Q.size() << endl;
    cout << Q.isEmpty() << endl;
    Q.push(60);
    Q.push(70);
    Q.pop();
    Q.pop();
       cout << Q.head() << endl;
    cout << Q.size() << endl;

    //    while(Q.size()!=0){
    //        cout << Q.head() << endl;
    //        Q.pop();
    //    }

    return 0;
}