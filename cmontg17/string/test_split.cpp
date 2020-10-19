
#include "string.hpp"
#include <cassert>
#include <iostream>




int main() {

{
String str("hello");

str.split('h');




}

{
String str("abc ef gh");

str.split(' ');




}

{
String str("-a--b-");

str.split('-');




}

{
String str("Hey+How+Are++");

str.split('+');


}

{
String str("-");

str.split('-');




}

{
String str("Time will tell...");

str.split('&');



}


{
String str("O Come, O Come upupupup");

str.split(' ');



}

std::cout << "Done testing split function" << std::endl;

}







