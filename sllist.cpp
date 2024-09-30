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