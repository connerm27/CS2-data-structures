#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{

String str("Hello");
String str2("World");

String result;
result = str + str2;

std::cout << str << " + " << str2 << " == " << result << std::endl << std::endl;


assert(result == "HelloWorld");
}


{

String str("Hello ");
String str2("World");

String result;
result = str + str2;

std::cout << str << " + " << str2 << " == " << result << std::endl << std::endl;


assert(result == "Hello World");
}

{

String str("abc");
String str2("");

String result;
result = str + str2;

std::cout << str << " + " << str2 << " == " << result << std::endl << std::endl;


assert(result == "abc");
}

{

String str("");
String str2("abc");

String result;
result = str + str2;

std::cout << str << " + " << str2 << " == " << result << std::endl << std::endl;


assert(result == "abc");
}

{

String str("");
String str2("");

String result;
result = str + str2;

std::cout << str << " + " << str2 << " == " << result << std::endl << std::endl;


assert(result == "");
}




{
char c = 'c';
String str("Hello");

String result = c + str;

std::cout << c << " + " << str << " == " << result << std::endl << std::endl;

}

{

char c[] = "Hello";
String str(" World");

String result = c+ str;
std::cout << c << " + " << str << " == " << result << std::endl << std::endl;

}


{
String str("Hello");
String str2("World");

std::cout << str << " += " << str2 << " == " <<  std::endl;

str += str2;

std::cout << str << std::endl << std::endl;

assert(str == "HelloWorld");


}

{
String str("Hello ");
String str2("World");

std::cout << str << " += " << str2 << " == " <<  std::endl;

str += str2;

std::cout << str << std::endl << std::endl;

assert(str == "Hello World");


}

{
String str("abc");
String str2("");

std::cout << str << " += " << str2 << " == " <<  std::endl;

str += str2;

std::cout << str << std::endl << std::endl;

assert(str == "abc");
}


{
String str("");
String str2("abc");

std::cout << str << " += " << str2 << " == " <<  std::endl;

str += str2;

std::cout << str << std::endl << std::endl;

assert(str == "abc");


}

{
String str("");
String str2("");

std::cout << str << " += " << str2 << " == " <<  std::endl;

str += str2;

std::cout << str << std::endl << std::endl;

assert(str == "");


}





std::cout << "Done testing concatenation" << std::endl; 


}









