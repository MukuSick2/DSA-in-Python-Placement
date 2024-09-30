#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(){}
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node(int data,Node* next){
        this->data=data;
        this->next=NULL;
    }
};

void InsertAtTail(Node* &tail,int a){
    // Node* &tail => by reference coz we dont want to create a copy of it and work //
    Node* temp = new Node(a);
    tail->next=temp;
    tail = temp;  // we can alos write tail = tail -> next;
}
void display(Node* &tail){
    Node* temp=tail;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp= temp->next;
    }
    cout<<endl;

}


int main(){
    Node* node1 = new Node(10);
    cout<< node1->data<<endl<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

    display(head);
    InsertAtTail(tail,12);
    display(head);
    InsertAtTail(tail,13);
    display(head);

}

// output => 10 
//           0
//           10
//           10 12
//           10 12 13

