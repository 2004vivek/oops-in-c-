#include<bits/stdc++.h>
using namespace std;
class point{
    int x1,y1;
    public:
    point(int a,int b){
        x1=a;
        y1=b;
    }
    friend void distance(point ,point);
    void display(){
        cout<<"the point is "<<x1<<" and "<<y1<<endl;
    }
};

void distance(point s1,point s2){
    cout<<sqrt(pow((s2.x1-s1.x1),2)-pow((s2.y1-s2.y1),2));
}
int main(){
    point o1(1,2);
    o1.display();
    point o2(5,6);
    o2.display();
    point o3(2,1);
    o1.display();
    point o4(5,7);
    o2.display();
    distance(o1,o2);
    distance(o3,o4);
}
