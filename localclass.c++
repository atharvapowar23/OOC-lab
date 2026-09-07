#include<iostream>
using namespace std;
void display()
{
   class Student
   {
   public:
       void show()
       {
          cout<<"This is a Local Class."<<endl;
       }
   };
   Student obj;
   obj.show();
}
int main()
{
  display();
  return 0;
}
