#include "string.hpp"
#include <cassert>
#include <iostream>

int main() {

{
String str("Hello");
String str2("World");
std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl;

str.swap(str2);

std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl << std::endl;


}

{
String str("Test");
String str2("Swap");
std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl;

str.swap(str2);

std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl << std::endl;


}

{
String str("X");
String str2("Z");
std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl;

str.swap(str2);

std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl << std::endl;


}

{
String str("Conner");
String str2("Montgomery");
std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl;

str.swap(str2);

std::cout << "First: " << str << std::endl;
std::cout << "Second: " << str2 << std::endl << std::endl;


}



std::cout << "Done testing swap assign." << std::endl;

}






