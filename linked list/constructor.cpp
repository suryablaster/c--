#include<iostream>
using namespace std;





#include<iostream>
using namespace std;

class student{

    private:

    int age;

    public:

    int rollNo;
// default constructor
    student(){
        cout<<"default constructor"<<endl;
    }
// parametrized constructor
    student(int a,int r){
        cout<<"parametrized constructor"<<endl;
        age=a;
        rollNo=r;
    }
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

student s2(10,20);
s2.display();





    return 0;
}