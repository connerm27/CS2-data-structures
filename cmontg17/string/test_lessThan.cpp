#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

std::cout << "1 == true; 0 == false;" << std::endl << std::endl;

{

char str = 'd';
String str2("dog");


bool result = str < str2;
std::cout << str << " < " << str2 << " == " << result <<  std::endl << std::endl;
assert(result);

}

{
char str [] = "colleg";
String str2("college");


bool result = str < str2;
std::cout << str << " < " << str2 << " == " << result <<  std::endl << std::endl;
assert(result);

}
{

String str("Kent");
String str2("Kent State University");


bool result = str < str2;
std::cout << str << " < " << str2 << " == " << result <<  std::endl << std::endl;
assert(result);
}

{

String str("Test");
String str2("Test");


bool result = str <= str2;
std::cout << str << " <= " << str2 << " == " << result <<  std::endl << std::endl;
assert(result);
}

{
String str("Computer Science");
String str2("Computer");


bool result = str > str2;
std::cout << str << " > " << str2 << " == " << result <<  std::endl << std::endl;
assert(result);
}

{
String str("Computer");
String str2("Computer");


bool result = str >= str2;
std::cout << str << " >= " << str2 << " == " << result <<  std::endl << std::endl;
assert(result);
}

std::cout << "Done Testing Less Than." << std::endl;

}









