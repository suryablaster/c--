#include<iostream>
using  namespace std;

void printpairs(int a[],int n ){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            cout<<a[i]<<" "<<a[j];
            cout<<endl;
        }
    }


}

int main(){

    int a[]={1,2,3,4};
    int n =sizeof(a)/sizeof(int);

    printpairs(a,n);



}