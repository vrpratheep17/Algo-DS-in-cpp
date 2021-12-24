#include<iostream>
using namespace std;

class DynamicArray{
    private:
    int *data;
    int nextIndex;
    int capacity;

    public:
    DynamicArray(){
        this->data=new int(5);
        this->nextIndex=0;
        this->capacity=5;
    }
    DynamicArray(int capacity){
        this->data=new int(capacity);
        this->nextIndex=0;
        this->capacity=capacity;
    }
    DynamicArray(DynamicArray const &D){
        this->nextIndex=D.nextIndex;
        this->capacity=D.capacity;
        this->data=new int(D.capacity);
        for(int i=0;i<nextIndex;i++){
            this->data[i]=D.data[i];
        }
    }
    void operator =(DynamicArray const &D){
        
         this->nextIndex=D.nextIndex;
        this->capacity=D.capacity;
        this->data=new int(D.capacity);
        for(int i=0;i<nextIndex;i++){
            //cout<<D.data[i]<<" ";
            this->data[i]=D.data[i];
        }
        cout<<endl;
    }

    void add(int value){
        if(nextIndex==capacity){
            int *tempdata=new int(capacity*2);
            for(int i=0;i<capacity;i++){
                tempdata[i]=this->data[i];
            }
           delete this->data;
            this->data=tempdata;
          
            this->capacity=capacity *2;
        }
        this->data[nextIndex]=value;
        nextIndex++;
    }
    void insertAtIndex(int value ,int Index){
        if(Index <0 || Index > this->nextIndex){
            return;
        }else if(Index ==nextIndex){
            add(value);
        }else{
            this->data[Index]=value;
        }
    }
    void print(){
        
        for(int i=0;i<nextIndex;i++){
      
            cout<<this->data[i]<<" ";
        }
        cout<<endl;
    }

    int getCapacity(){
        return capacity;
    }
    int getIndex(int index){
        if(index<0 || index >nextIndex){
            return -1 ;
        }
        return this->data[index];
    }

};




int main(){
    DynamicArray D1;
    D1.add(5);
    D1.add(25);
    D1.add(35);
    D1.add(45);
    D1.add(55);
    D1.add(65);
    D1.add(75);
    D1.insertAtIndex(101,0);
    cout<<"Capacity of D1 is "<<D1.getCapacity()<<endl;
    D1.print();
   
     DynamicArray D2(D1);
     D1.insertAtIndex(103,0);
      D1.print();
     D2.print();
    DynamicArray D3=D1;
     D1.insertAtIndex(109,0);
    cout<<"Capacity of D2 is "<<D2.getCapacity()<<endl;
    // D2=D1;
    D3.print();
    return 0;
}