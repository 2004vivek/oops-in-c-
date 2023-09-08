//inheritance
//1.child derived:type<parent class>
#include<iostream>
using namespace std;
class Human{
    public:
    int age;
	string name;
	public:
		void setname(string myname){
			name=myname;
		}
		void setage(int val){
			age=val;
		}
};
//protected we cant access the parent class because once it comes to student class it become protected
class Student:protected Human{
	public:
		//changing the scope of the function of parent class which becomes protected after coming to child class we can accesin protected mode by changing the scope of the function by making it public in child clas
		Human::setname;
		Human::setage;
		Human::age;
		Human::name;
		int id;
		
		void setid(int val){
			id=val;
		}
		void get(){
		    cout<<id<<" "<<name<<" "<<age;
		}
		//if we have protected method in  heriachy then int hat we will make public function
//		void Setdata(string myname,int val,int d){
//		    name=myname;
//		    age=val;
//		    id=d;
//		}
};
int main(){
	Student vivek;
	vivek.id=2345;
	//accesing in public mode
//	vivek.setname("vivek",23);
	//accseing in protected
	vivek.age=89;
	vivek.name="vivek";
//	vivek.etdata("vivekkumar",23,123);
// 	vivek.name="vivekkumar";
	vivek.get();
	
	
}
