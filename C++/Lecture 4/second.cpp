#include<iostream>
using namespace std;
class person{
	public:
		void dispaly(){
			cout<<"This is your first methode"<<endl;
		}
	
};
class boy:public person{
	public:
		void dispaly(){
			cout<<"Boy can run "<<endl;
		}
};



int main(){
	boy obj;
	obj.dispaly();
	obj.person::dispaly();
	
	return 0;
}
