// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class Human{
	string name;
	int age;
	public:
		Human(string n,int a){
			name=n;
			age=a;
		}
		friend class Student;
		
};
class Student{
	public:
		int marks;
// 	void display(){
// 		cout<<marks<<name<<age;
// 	}
// 	Human(Human h){
// 		name=h.name;
// 		age=h.age;
// 	}
		void display(Human &t){
		cout<<t.name<<" "<<t.age<<marks<<endl;
		}
};
int main(){
    Human h("vivek",1);
	Student s;
	
	s.marks=12;
	s.display(h);
	//s1.display();
}
