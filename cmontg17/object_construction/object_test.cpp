#include <iostream>
#include "object_construction.hpp"

void func_call_by_value(MyClass myObject) {

std::cout << "Hello!! this is call by value\n";

}

void func_call_by_ref(MyClass * myObject) {

std::cout << "Hello! this is call by Ref \n";
}


int main() {


MyClass ex1;

MyClass ex2(ex1);

MyClass ex3;

ex3 = ex1;

MyClass *temp;
//*temp = ex3;
std::cout<<"Before call by value \n";
func_call_by_value(ex3);
	std::cout<<"Before call by ref\n";
func_call_by_ref(temp);
return 0;







}
