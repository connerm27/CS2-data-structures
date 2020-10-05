#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{

String str("Testing");

std::cout << str << std::endl;

String result = str.substr(0,3);

std::cout << "The substring from 0,3 == " << result << std::endl << std::endl;

}

{

String str("Testing");

std::cout << str << std::endl;

String result = str.substr(2,6);

std::cout << "The substring from 2,6 == " << result << std::endl << std::endl;

}

{

String str("Testing");

std::cout << str << std::endl;

String result = str.substr(3,3);

std::cout << "The substring from 3,3 == " << result << std::endl << std::endl;

}

{

String str("Testing");

std::cout << str << std::endl;

String result = str.substr(2,1);

std::cout << "The substring from 2,1 == " << result << std::endl << std::endl;

}

std::cout << "Done testing subscript." << std::endl; 


}









