//dynamic object creation
#include<iostream>
using namespace std;

class student{
  public:
  int age;
  int rollno;

  student(int a,int r){
      age=a;
      rollno=r;
  }

void print(){
    cout<<age <<" "<<rollno;
}

};



int main(){


student* s1=new student(12,101);

s1->print();

}