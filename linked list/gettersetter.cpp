#include<iostream>
using namespace std;

class student{

    private:

    int age;

    public:

    int rollNo;

    int getage(){
        return age;
    }

    void setage(int a){
        age=a;
    }

    void display(){
        cout<<age<<" "<<rollNo;
    }



};

int main(){


student s1;

s1.setage(25);

s1.display();

















    return 0;
}