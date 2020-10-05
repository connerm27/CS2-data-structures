#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{

String str("Testing");
std::cout << str << std::endl;
char x = 's';
int result = str.findch(2, x);

std::cout << x << " found at or after 2 at: " << result << std::endl << std::endl;


}

{

String str("Testing");
std::cout << str << std::endl;
char x = 'i';
int result = str.findch(2, x);

std::cout << x << " found at or after 2 at: " << result << std::endl << std::endl;


}
{
String str("Testing");
std::cout << str << std::endl;
char x = 'e';
int result = str.findch(2, x);

std::cout << x << " found at or after 2 at: " << result << std::endl;
std::cout << "-1, was not found" << std::endl << std::endl;

}

{
String str("Testing");
std::cout << str << std::endl;
char x = 'e';
int result = str.findch(9, x);

std::cout << x << " found at or after 9 at: " << result << std::endl;
std::cout << "-1, was not found" << std::endl << std::endl;

}

{
String str("Testing");
std::cout << str << std::endl;
char x = 'T';
int result = str.findch(0, x);

std::cout << x << " found at or after 0 at: " << result << std::endl << std::endl;
}




std::cout << "Done testing find char." << std::endl; 


}









