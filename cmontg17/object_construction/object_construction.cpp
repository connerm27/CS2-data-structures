#include "object_construction.hpp"
#include <iostream>


MyClass::MyClass() {

std::cout << "Default Constructor was called." << std::endl;

stringSize = 1;
str = new char[stringSize];
str[0] = '\0';


}

MyClass::MyClass(const MyClass& z) {


std::cout << "Copy Constructor was called." << std::endl;

this->stringSize = z.stringSize;
str = new char[stringSize];

int i;
for(i=0; i < stringSize; ++i) {
	str[i] = z.str[i];
}

str[stringSize-1] = '\0';


}

MyClass& MyClass::operator=(MyClass z) {

std::cout << "Assignment operator  was called." << std::endl;


this->stringSize = z.stringSize;
str = new char[stringSize];

int i;
for(i=0; i < stringSize; ++i) {
        str[i] = z.str[i];
}

str[stringSize-1] = '\0';

//char *temp_str = str;
//str = z.str;
//z.str = temp_str;

//int temp_len = stringSize;
//stringSize = z.stringSize;
//z.stringSize = temp_len;



return *this;
}



MyClass::~MyClass() {

delete[] str;

std::cout << "Destructor  was called." << std::endl;

}
