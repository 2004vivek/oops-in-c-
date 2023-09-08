//#include<iostream>
//using namespace std;
//class Circle{
//	private:
//		double radius;
//	public:
//		void display(double r){
//			radius=r;
//			cout<<radius<<endl;
//			cout<<3.14*radius*radius;
//		}
//};
//int main(){
//	Circle c;
//	c.display(1);
//}

#include<iostream>
using namespace std;
class Circle{
	public:
		double radius;
		void display();
};
void Circle::display(){
	
			cout<<radius<<endl;
			cout<<3.14*radius*radius;
}
int main(){
	Circle c;
	c.radius=1;
	c.display();
}
