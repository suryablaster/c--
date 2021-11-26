#include<bits/stdc++.h>
using namespace std;

void TowerOfHanoi(int n,string from_tower,string to_tower,string aux_tower){
    if(n==1){
        cout<<"move disc 1 from rod " <<from_tower<<"to rod"<<to_tower;
        return;
    }
    TowerOfHanoi(n-1,from_tower,aux_tower,to_tower);
    


}

int main()  
{  
    int n = 3; // Number of disks  
    TowerOfHanoi(n, "Start", "End", "Mid");  //names of the towers
    return 0;  
}  