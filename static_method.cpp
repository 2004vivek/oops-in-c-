#include<iostream>
using namespace std;
class Rectangle{
	public:
		static int length,breadth;
		int height;
		 void static_display(){
			cout<<length;
			cout<<breadth;
		
		}
		void display(){
			cout<<height;
		}
};
//defining of static variable
//datatpe class_name::variable="val"
int Rectangle::length=2;
int Rectangle::breadth=6;
int main(){
	Rectangle r;
	r.height=5;
	r.static_display();
//	Rectangle::static_display();
}
