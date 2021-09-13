#include<iostream>
using namespace std;

int search(int a[],int n,int x){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==x) return mid;

        if(a[s]<a[mid]){
            if(x>=a[s] && x<a[mid]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        else{
            if(x>a[mid] && x<=a[e]){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
    }

    return -1;
}


int main(){

int n;
cin>>n;

int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];

}
int x;
cin>>x;



cout<<search(a,n,x);




    return 0;
}
