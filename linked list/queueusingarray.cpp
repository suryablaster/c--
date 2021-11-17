#include<bits/stdc++.h>
using namespace std;


class qu{
    public:
    int* a;
    int cnt,cap;
    int front,rear;

    qu(int c){
        cap=c;
        cnt=0;
        a=new int[cap];
        front=0;
        rear=0;
    }

    void enqueue(int n){
        if(cnt==cap) return;
        a[rear%cap] =n;
        rear++; 
        cnt++;
    }

    int dequeue(){
        if(cnt==0) return -1;
        int res=a[front%cap];
        a[front%cap]=-1;
        front++;
        cnt--;
        return res;
    }

    int fr(){
        return a[front%cap];
    }

    int re(){
        return a[rear%cap];
    }

    int size(){
        return cnt;
    }

    void print(){
        while(cnt>0){
            cout<< fr();
            dequeue();
        }
    }

};

int main(){


    qu q(6);

    q.enqueue(1);
    q.enqueue(1);
    q.enqueue(1);
    q.enqueue(1);
    q.enqueue(1);
    q.enqueue(1);
    q.dequeue();
    q.enqueue(2);
   
    q.enqueue(2);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
 q.enqueue(2);
    q.enqueue(2);
    q.enqueue(2);
    q.enqueue(2);
    q.enqueue(2);

q.print();














    return 0;
}