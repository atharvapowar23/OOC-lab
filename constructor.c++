#include<iostream>
using namespace std;
class Student{
public:
  string name;
  int age;
 Student(string n, int a){
  name=n;
  age=a;
 }

 void display(){
  cout<<"Name:"<<name<<endl;
  cout<<"Age:"<<age<<endl;
 }
};
int main(){
  Student s("Atharva",19);
  s.display();
  return 0;
}
