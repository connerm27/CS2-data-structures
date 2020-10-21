#ifndef _OBJECT_CONSTRUCTION_HPP_
#define _OBJECT_CONSTRUCTION_HPP_

#include <iostream>


class MyClass {




public:

char *str;

int stringSize;

MyClass(); //Default Constructor

MyClass(const MyClass&); //Copy Constructor

MyClass& operator=(MyClass); //Assignment


~MyClass(); //Destructor


};


#endif
