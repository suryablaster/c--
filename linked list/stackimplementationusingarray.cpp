#include<bits/stdc++.h>
using namespace std;


class st{

int* arr;

public:

int cap;

int top;

int count=0;


st(int a){
    cap=a;
    arr=new int[cap];
    top=-1;
}


void push(int b){
    if(count==cap){
        return;
    }

    top++;
    arr[top]=b;
    count++;
}

int pop(){
    top--;
    return arr[top+1];
}

bool isEmpty(){
    if(top== -1){
        return true;
    }
    else{
        return false;
    }
}

int peak(){
    return arr[top];
}

int size(){
    return top+1;
}

};


int main(){


st s1(6);
s1.push(3);
s1.push(3);
s1.push(3);
s1.push(3);
s1.push(4);
s1.push(5);
s1.push(6);
s1.push(7);
s1.push(8);


cout<<s1.size()<<endl;

cout<<s1.peak();











    return 0;
}