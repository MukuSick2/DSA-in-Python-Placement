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
    Node(int data, Node*next){
        this->data=data;
        this->next=NULL;
    }
};
void InsertAtHead(Node* &head, int a){
    // Node* &head => by reference coz we dont want to create a copy of it and work // 
    Node* temp = new Node(a);
    temp->next=head;
    head=temp;
}
// to print values //

void display(Node* &head){

    // we dont want to change the main head node .so //
    Node* temp=head;
    while(temp!=NULL){
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){

    Node* node1 = new Node(10);
    cout<< node1->data<<endl<<node1->next<<endl;

    Node* head = node1;

    display(head);
    InsertAtHead(head,12);
    display(head);
    InsertAtHead(head,13);
    display(head);

}

// output => 10 
//           0
//           10
//           12 10
//           13 12 10
