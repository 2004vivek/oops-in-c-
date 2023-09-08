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

//mutiple  inheritance
class Student:public Person{
	public:
	int id;
	string college;
	Student(int word,string n,int myid,string c):Person(word,n){
		id=myid;
		college=c;
		
	}
	void display(){
		cout<<age<<" "<<name<<" "<<id<<" "<<college;
	}
};
int main(){
	Student s(19,"vivek",54,"Aec");
	s.display();
	
}
