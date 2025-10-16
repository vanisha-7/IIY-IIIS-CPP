#include<iostream>
using namespace std;
class Employee{
private:
string name;
double salary;
public:
Employee&setname(string n){
this->name=n;
return *this;
}
Employee&setsalary(double s){
this->salary=s;
return *this;
}
void display(){
cout<<"name :"<<name<<endl<<"salary :"<<salary<<endl;
}
};
int main(){
Employee e1;
e1.setname("alice").setsalary(55000);
e1.display();
return 0;
}
