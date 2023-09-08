#include<iostream>
using namespace std;
class Student{
	public:
		
	string rollno,name,phno,branch,college;
    int bc;
//    string rollno="22mh1a05f3";
    double age;
//    Student(){
//	cout<<"hai";
//}
Student(string r,string n,string p,string b,string c,int bc,double a);
void display();

};//end class

void Student::display(){
	cout<<rollno<<" "<<name<<" "<<phno<<" ";
	cout<<branch<<" "<<college<<" "<<bc<<" "<<age<<endl;
}

//no returntype of constructor
Student::Student(string r,string n,string p,string b,string c,int bc,double a){
//	r,p,n are local variable 
	this->rollno=r;//here 'this' is object mostly used in java and in cpp it is optional
	this->name=n;
	this->phno=p;
	this->branch=b;
	this->college=c;
	this->bc=bc;
	this->age=a;
}
int main(){
	Student s1("123","vivek","223454456","cse","acoe",0,40.2);
	s1.display();
}
