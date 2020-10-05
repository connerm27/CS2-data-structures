#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{
String str(' ');
String str2(' ');

std::cout << str << " == " << str2 << std::endl;

assert(str == str2);

}

{
char c = 'a';
String str2('a');

std::cout << c << " == " << str2 << std::endl;

assert(c == str2);

}

{
String str("HelloWorld");
String str2("HelloWorld");

std::cout << str << " == " << str2 << std::endl;

assert(str == str2);

}

{
char str[] = "test";
String str2("test");

std::cout << str << " == " << str2 << std::endl;

assert(str == str2);

}

{

String str("test");
String str2("tests");

std::cout << str << " != " << str2 << std::endl;

assert(str != str2);

}


std::cout << "Done testing equal" << std::endl; 


}









