#include<bits/stdc++.h>
using namespace std;


class st{

int* arr;

public:

int cap;

int top;


st(int a){
    cap=a;
    arr=new int[cap];
    top=-1;
}


void push(int b){
    top++;
    arr[top]=b;
}

int pop(){
    top--;
    return arr[top+1];
}

bool isEmpty(){
    if(cap==0){
        return true;
    }
    else{
        return false;
    }
}

int peak(){
    return arr[top];
}

};


int main(){


st s1(6);
s1.push(3);
s1.push(3);
s1.push(3);
s1.push(3);
s1.push(4);

cout<<s1.peak();












    return 0;
}