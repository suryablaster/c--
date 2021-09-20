#include<iostream>
using namespace std;

void insertionsort(int a[],int n){
    for(int i=1;i<n;i++){
        int key=a[i];
        int j=i-1;

        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
        }

        a[j+1]=key;
        
    }
}

int main(){

    int a[3]={1,1,2};
    int b[1]={3};

    int temp[4]={0};

    for(int i=0;i<3;i++){
        temp[i]=a[i];
    }
   for(int i=3;i<4;i++){
    temp[i]=b[i-2];
   }

   for(int i=0;i<4;i++){
    cout<<temp[i];
   }



    return 0;
}