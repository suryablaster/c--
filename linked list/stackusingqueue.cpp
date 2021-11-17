#include<bits/stdc++.h>
using namespace std;


class st{
    public:
    // int cap;
    // st(int n){
    //     cap=n;
    // }
    queue<int> q1,q2;

    void push(int x){
        // if(q1.size == cap) return;
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> q3=q2;
        q2=q1;
        q1=q3;

  
    }

    void popitem(){
        q1.pop();
    }
    
    int top(){
        return q1.front();
    }
    

};





int main(){


st s1;
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);
s1.push(2);









    return 0;
}