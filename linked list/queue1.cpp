#include<bits/stdc++.h>
using namespace std;

int main(){


queue<int> q;


int n;
cin>>n;
for(int i=0;i<n;i++){

    int e;
    cin>>e;
    q.push(e); 
}


while(q.size() != 0){
    cout<<q.front()<<" ";
    q.pop();
}























    return 0;
}