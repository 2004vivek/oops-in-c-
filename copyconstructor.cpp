//copy constructor
#include<iostream>
using namespace std;
class Student{
	public:
		string name,rollno;
		Student(){
			name="Sudhir";
			rollno="22mh1a05f3";
			cout<<"constructor1"<<endl;
		}
		void display(){
			cout<<name<<" "<<rollno<<" "<<endl;
		}
		Student(string n,string r){
			this->name=n;
			this->rollno=r;
		}
		Student(Student &s){
			this->name=s.name;
			this->rollno=s.rollno;
		}
		//constructor overloading
		Student(string name){
			this->name=name;
			this->rollno="000";
		}
		
};
int main(){
	Student s1,s2("vivek","123"),s3(s2),s4("kumar"); //copy constructor having parameter as object
	s1.display();
	s2.display();
	s3.display();
	s4.display();
}

