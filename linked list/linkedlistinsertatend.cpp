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
    while(head != NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

void insertatend(Node* &head,int d){
if(head==NULL){

    insertatbegining(head,d);

}
Node* temp=head;

while(temp->next != NULL){
    temp=temp->next;
}

temp->next=new Node(d);



}

void deleteHEad(Node* &head){
    if(head==NULL){
        return;
    }

    Node* temp=head->next;
    delete head;

    head=temp;



}

int main(){

    Node* head=NULL;
    insertatbegining(head,2);
    insertatbegining(head,3);
    insertatbegining(head,4);
    // insertatend(head,2);
    // insertatend(head,3);
    // insertatend(head,4);
    // insertatend(head,5);

    insertatend(head,6);
    deleteHEad(head);

    print(head);




    return 0;
}