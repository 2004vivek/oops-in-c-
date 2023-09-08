// Online C++ compiler to run C++ program online
#include<iostream>
using namespace std;
class Person{
	public:
		int age;
		string name;
		Person(int word,string n){
			age=word;
			name=n;
		}
};
class Father:public Person{
	public:
		int dob;
		string proff;
		Father(int word,string n,int d,string p):Person(word,n){
			dob=d;
			proff=p;
		}
};
//mutiple  inheritance
class Student:public Father{
	public:
	int id;
	string college;
	Student(int word,string n,int d,string p,int myid,string c):Father(word,n,d,p){
		id=myid;
		college=c;
		
	}
	void display(){
		cout<<age<<" "<<name<<" "<<id<<" "<<college<<""<<dob<<" "<<proff;
	}
};
int main(){
	Student s(19,"vivek",1990,"business",899,"Aec");
	s.display();
	
}
