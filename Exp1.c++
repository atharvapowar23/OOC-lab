#include<iostream>
#include<string>
using namespace std;

class student
{
private: string name;
         int roll_number;
         float marks;
public: void input()
      {
       cout<<"Enter name of student\n";
       cin>>name;
       cout<<"Enter roll number of student\n";
       cin>>roll_number;
       cout<<"Enter marks of student\n";
       cin>>marks;
       }
       void display()
      {
       cout<<"\nThe name of student is:-"<<name;
       cout<<"\nThe roll number of student is:-"<<roll_number;
       cout<<"\nThe marks of student is:-"<<marks;
      }
};
int main()
{
student s;
s.input();
s.display();
return 0;
}
