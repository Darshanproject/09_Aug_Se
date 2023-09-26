#include<iostream>
using namespace std;

class A{
	public:
		void dis(){
			cout<<"Class A";
		}
};

class B{
	public:
		void dis2(){
			cout<<"Class B";
		}
};
class c:public B, public A{
	public:
		void dis3(){
			cout<<"Class c";
		}
};

int main(){
	c obj;
	obj.dis();
	obj.dis2();
	obj.dis3();
	
	
	
	return 0;
}
