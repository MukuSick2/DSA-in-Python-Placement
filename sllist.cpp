#include<iostream>
using namespace std;
// creating node without constructor //

class Node{
    public:
    int data;
    Node* next;
    // Node(){};
    // Node(int data){
    //     this ->data=data;
    //     this ->next=NULL;
        
    // }

};


int main(){
    Node* node1= new Node();
    cout<< node1 -> data<<endl<<node1 ->next<<endl;
    cout<<sizeof(node1->next);


};

// output => 0 0(garbage value) 4 //

// creating Node with constructor //

class Node{
    public:
    int data;
    Node* next;
    Node(){};
    Node(int data){
        this ->data=data;
        this ->next=NULL;
        
    }
    Node(int data,Node* next){
        this ->data=data;
        this ->next=NULL;
        
    }

};


int main(){
    //creating a pointer //
    Node* p;
    Node* node1= new Node(10,p);
    cout<< node1 -> data<<endl<<node1 ->next<<endl;
    cout<<sizeof(node1->next);


};

// output => 10 0(garbage value) 4 //
