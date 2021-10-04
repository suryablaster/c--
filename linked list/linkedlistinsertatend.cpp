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
int length(Node* head){
    int count =0;
    while(head !=NULL){
        count++;
        head=head->next;
    }
    return count;
}

void printithnode(Node* head,int i){
    if(i>length(head)){
        return;
    }
    int a=0;
    while(a<=i){
        head=head->next;
    }
    cout<<head->data;
}

// void delete(Node* &head, int pos){
//     if(head==NULL){
//         return;
//     }
//     Node* temp=head;
//     int count =0;
//     while(count<pos-1){
//         temp=temp->next;
//         count++;
//     }

//     Node* a = temp->next;
//     Node* b = a->data;
//     temp->next=b;
//     delete a;

// }

int main(){

    Node* head=NULL;
    insertatbegining(head,2);
    insertatbegining(head,3);
    insertatbegining(head,4);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    insertatend(head,5);

    insertatend(head,6);
    // deleteHEad(head);
    int p=3;
    // delete(head , p);
    print(head);

// cout<<length(head);

// cout<<printithnode(head,2);
 
    return 0;
}