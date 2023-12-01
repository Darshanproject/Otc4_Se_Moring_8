#include<iostream>
using namespace std;
class person{   ///class declartion
	public: //private , procted
	///Member function
	void age(){
	cout<<"This is my member function";
	}
};


main(){
	person obj;   ///creating a object for person class
	obj.age();///calling my memeber function with help of object
}
