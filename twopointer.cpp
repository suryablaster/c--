#include<iostream>
using namespace std;

bool pairsum(int a[],int n,int key){

        int s=0;
        int e=n-1;

        while(s<e){
            if(a[s]+a[e] > key){
                e--;
            }else if(a[s]+a[e] < key){
                s++;
            }else{
                return true;
            }
        }
    return false;

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

cout<<pairsum(a,n,key);







 return 0;
}