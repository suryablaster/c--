#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int d){
        data=d;
        next=NULL;
    }

};


class st{
    public:
    node *head;
    int si=0;

    void push(int d){
        node* temp = new node(d);
        temp->next=head;
        head=temp;
        si++;
    }

  int pop(){
      int res = head->data;
      node* temp=head;
      head=head->next;
      delete temp;
      si--;
      return res;
  }

  int peak(){
      return head->data;
  }

  int size(){
      return si;
  }


};


int main(){





st s1;
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4777);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(4);
s1.push(5);
s1.pop();
s1.pop();
s1.pop();
s1.pop();
s1.pop();



cout<<s1.peak()<<endl;
cout<<s1.size();













    return 0;
}