#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{

String str("HelloWorld");
String str2("World");

std::cout << str << std::endl;

int result = str.findstr(3, str2);

std::cout << str2  << " found at or after 3 at: " << result << std::endl << std::endl;


}

{

String str("HelloWorld");
String str2("World");

std::cout << str << std::endl;

int result = str.findstr(5, str2);

std::cout << str2 << " found at or after 5 at: " << result << std::endl << std::endl;


}

{

String str("Kent State University");
String str2("State");

std::cout << str << std::endl;

int result = str.findstr(0, str2);

std::cout << str2 << " found at or after 0 at: " << result << std::endl << std::endl;


}

{

String str("Testing");
String str2("Test");

std::cout << str << std::endl;

int result = str.findstr(4, str2);

std::cout << str2 << " found at or after 4 at: " << result << std::endl;
std::cout << "-1, not found" << std::endl << std::endl;

}

{

String str("Testing");
String str2("Test");

std::cout << str << std::endl;

int result = str.findstr(9, str2);

std::cout << str2 << " found at or after 9 at: " << result << std::endl;

std::cout << "-1, not found" << std::endl << std::endl;


}

std::cout << "Done testing find string." << std::endl; 


}









