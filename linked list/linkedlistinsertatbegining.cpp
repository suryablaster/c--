#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node* next;

    Node(int d){

        data=d;
        next=NULL;

    }

};

void insertatbegining(Node* &head,int d){

    if(head==NULL){
        head=new Node(d);
        return;
    }

    Node* n = new Node(d);
    n->next=head;
    head=n;


}

void print(Node* head){
    if(head != NULL){
        cout<<head->data;
        head=head->next;
    }
}

int in(){

    Node* head=NULL;


insertatbegining(head,3);
insertatbegining(head,2);
insertatbegining(head,1);
insertatbegining(head,0);

print(head);












    return 0;
}