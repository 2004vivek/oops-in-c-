#include<iostream>
using namespace std;
class Student{
	private:
		string name;
		int roll;
	public:
		Student(string n,int r){
			name=n;
			roll=r;
		}
		//constructor overloading-constructor with different paramete	
		Student(string n){
			name=n;
			roll=7;
		}
			//copy constructor
		Student(Student &s){
			name=s.name;
			roll=s.roll;
		}
	
		void display(){
			cout<<"hi my name is "<<name <<" with age "<<roll;
		}
};
int main(){
	Student s("vivek");
	//copy constructor
	Student s1(s);
	s.display();
	s1.display();
	
		
}
