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
                    Node *newhead;
                    if(last==nullptr){
                        newhead = head;
                        this->head = head->next;
                    }else if(temp->next==nullptr){
                        newhead = temp;
                        last->next = nullptr;
                    }else{
                        newhead = temp;
                        last->next = temp->next;
                    }
                    delete newhead;
                    return;
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

        int middleNode(){
            Node *slow = this->head;
            Node *fast = this->head->next;

            while(slow && fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }

            if(!fast){
                return slow->head;
            }

            if(fast->next==nullptr){ 
                return slow->next->head;
            }

        }

        void reverseLinkedList(){
            Node *temp = this->head;
            Node *last = this->head;
            int i = 0;
            while(temp){
                Node *n = new Node(temp->head);
                if(i==0){
                n->next = nullptr;
                }else{
                    n->next= last;   
                }
                last = n;
                i++;
                temp = temp->next;
             }
                this->head = last;  
        }

        void removeKthelementfromLast(int k){
            Node *slow = this->head;
            Node *fast = this->head;

            while(k--){
                fast = fast->next;
            }

            if(fast->next){
                while(fast->next){
                    slow = slow->next;
                    fast = fast->next;
                }
            }

           // cout << slow->head;
            slow->next = slow->next->next;

            // NodeToDelete->next = NodeToDelete->next->next;
        }
        
};

int main(){
    LinkedList *li = new LinkedList();
    li->insert(1);
    li->insert(2);
    li->insert(3);
    li->insert(4);
    li->insert(5);
    li->insert(6);
    
    // li->deletebyIndex(0);
    // li->updatebyIndex(1, 33);
    li->print();
    cout << endl;
   // cout << li->find(4);
    cout << endl;
    // cout << "find mid" << li->middleNode();
   // li->reverseLinkedList();
    cout << "he" << endl;
    li->removeKthelementfromLast(2);
   li->print();
    // li->print();
    // cout<<endl<<li->length();
}