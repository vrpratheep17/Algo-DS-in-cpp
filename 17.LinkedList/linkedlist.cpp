#include<iostream>

using namespace std;


class Node{
    public:
        int head;
        Node *next;
        Node(int value)
        {
            this->head = value;
            this->next = nullptr;
        }
};

class LinkedList{
    private:
        Node *head;
        Node *tail;
    public:
         LinkedList()
        {
            this->head = nullptr;
            this->tail = nullptr;
        }
        //create
        void insert(int value){
            Node *n = new Node(value);
            if(this->head==nullptr){
                this->head = n;
                this->tail = n;
            }
            else {
                this->tail->next = n;
                this->tail = n;
            }

        }
        //read
        void print(){
            Node *temp = head;
            while(temp!=nullptr){
                cout << temp->head << endl;
                temp = temp->next;
            }
        }
        //delete
        void deletebyIndex(int index){
            Node *temp = this->head;
            Node *last = nullptr;
            int i = 0;
            while(temp!=nullptr){
                if(i==index){
                    if(last==nullptr){
                        
                        this->head = head->next;
                    }else if(temp->next==nullptr){
                        last->next = nullptr;
                    }else{
                        last->next = temp->next;
                    }
                }
                i++;
                last = temp;
                temp = temp->next;
            }
        }
        //update
        void updatebyIndex(int index,int value){
            Node *temp = this->head;
            int i = 0;
            while(temp!=nullptr){
                if(i==index){
                    temp->head = value;
                }
                i++;
                temp = temp->next;
            }
        }

        // int length(){
        //     Node *temp = this->head;
        //     int i = 0;
        //     while(temp!=nullptr){
        //         i++;
        //         temp = temp->next;
        //     }
        //     return i;
        // }
        int length(){
            length(this->head);
        }

        int findByIndex(int value){
            findByIndex(this->head, value);
        }
        int findByIndex(Node *head, int value,int index=0){
            if(head==nullptr){
                return -1;
            }

            if(value==index){
                return index;
            }

            return findByIndex(head->next, value, index + 1);
        }

        //find the element in the array
        int find(int value){
            find(this->head, value);
        }

        int find(Node * temp,int value,int index=0){
            if(temp==nullptr){
                return -1;
            }

            if(value==temp->head){
                return index;
            }
            return find(temp->next, value, index+1);
        }

        int length(Node * temp,int index=0){
            if(temp==nullptr) return index;
            return 1 + length(temp->next);
        }

        int findMid(){
            int len = this->length();
            int mid = len / 2;
            return this->findByIndex(mid);
        }

        
};

int main(){
    LinkedList *li = new LinkedList();
    li->insert(1);
    li->insert(2);
     li->insert(3);
    li->insert(4);
       li->insert(3);
    li->insert(4);
    // li->deletebyIndex(0);
    // li->updatebyIndex(1, 33);
    li->print();
    cout << endl;
    cout << li->find(4);
    cout << endl;
    cout << "find mid" << li->findMid();
    //cout<<endl<<li->length();
}