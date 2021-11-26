#include<bits/stdc++.h>
using namespace std;

void printpatter(int n){
    if(n==0) return;

    for(int i=0;i<n;i++){
        cout<<"*"<<" ";
    }
    cout<<endl;
    printpatter(n-1);

}

int main(){




printpatter(5);








    return 0;

}