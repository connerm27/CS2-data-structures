#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{
String str("Hello");
int result = str.capacity();

std::cout << "Capcity == " << result << std::endl << std::endl;

assert(result == 256);

}

{

String str("Testing");
std::cout << str << std::endl;

int result = str.length();

std::cout << "Length == " << result << std::endl <<std::endl;

assert(result == 7);

}
{
String str("Kent State");
std::cout << str << std::endl;

int result = str.length();

std::cout << "Length == " << result << std::endl <<std::endl;

assert(result == 10);

}

{
String str("");
std::cout << str << std::endl;

int result = str.length();

std::cout << "Length == " << result << std::endl <<std::endl;

assert(result == 0);

}

{
String str(" ");
std::cout << str << std::endl;

int result = str.length();

std::cout << "Length == " << result << std::endl <<std::endl;

assert(result == 1);

}


std::cout << "Done testing capacity and length." << std::endl; 


}









