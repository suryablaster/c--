#include<iostream>
using namespace std;

int linearSearch(int a[],int n,int key){

int i=0;
if(i>n-1){
    return -1;
}

if(a[i]==key){
    return i;
}else{
    i++;
    return linearSearch(a,n-1,key);
}


}


int main(){




int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int key;
cin>>key;

cout<<linearSearch(a,n,key);













    return 0;
}