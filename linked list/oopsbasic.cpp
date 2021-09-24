#include<iostream>
using namespace std;

class student{
    private:
    string name;
    int age;

    public:

    void print(){
        cout<<name<<" age -"<<age;

    }

    student(string name,int age){
        this->name = name;
        this->age=age;
    }
};


int main(){



student s1("surya",22);

s1.print();



















    return 0;
}