#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{
String str("Testing");
std::cout << str << std::endl;

char result;
result = str[0];

std::cout << "str[0] == " << result << std::endl << std::endl; 
}

{
String str("Testing");
std::cout << str << std::endl;

char result;
result = str[1];

std::cout << "str[1] == " << result << std::endl << std::endl; 
}

{
String str("Testing");
std::cout << str << std::endl;

char result;
result = str[3];

std::cout << "str[3] == " << result << std::endl << std::endl; 
}


std::cout << "Done testing subscript." << std::endl; 


}









