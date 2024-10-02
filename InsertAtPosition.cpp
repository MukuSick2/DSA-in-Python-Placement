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

void InsertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node* &tail,int a){
    // Node* &tail => by reference coz we dont want to create a copy of it and work //
    Node* temp = new Node(a);
    tail->next=temp;
    tail = temp;  // we can alos write tail = tail -> next;
}

void InsertAtPosition(Node* &head,int pos, int a){
    // what if user wants to insert as 1st index? we will use if statement. //
    if(pos==1){
        InsertAtHead(head,a);
        return;
    }

    // for traversing till n-1th position and storing its value, we use: //
    Node* temp = head;
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }

    // for storing new value , we need: //
    Node* ins = new Node(a);

    ins->next = temp->next; // for giving address of next value to new value //
    temp->next = ins;      // for given address of new value to n-1th position / prev. value / 


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
    InsertAtPosition(head,2,40);
    display(head);

}

// output => 10 
//           0
//           10
//           10 12
//           10 12 13
//           10 40 12 13

