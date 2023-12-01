#include<iostream>
using namespace std;
class grandfathers{
	public:
		void display(){
			cout<<"This is my garndfathers class "<<endl;
		}
};
class fathers:public grandfathers{
	public:
		void display1(){
			cout<<"This is my fathers class "<<endl;
		}
};
class child:public fathers{
	public:
		void display2(){
			cout<<"This is child class"<<endl;
		}
};


int main(){
	child obj;
	obj.display();
	obj.display2();
	obj.display1();
	return 0;
}
