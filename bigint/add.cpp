//==============================================================================
// Basics for openning a file for milestone 2 of Project 1.
//
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "bigint.hpp"

int main() {
    std::ifstream in("data1-1.txt");    // Define stream for input
    if(!in) {                           // Make sure it opened correctly.
        std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
        exit(1);
    }

    //Until end of file
       //Read two bigints
       //Print them out
       //Add them together

       //Print out results


	while (!in.eof()) {
	

	//	bigint data;
	//	in >> data;

		//Creates two bigints
		bigint bi1;
		bigint bi2;
		bigint result;
		//Takes in bigints
		in >> bi1;
		in >> bi2;

		std::cout << "This is the bigint 1: " << bi1 << std::endl;
		std::cout << "This is the bigint 2: " << bi2 << std::endl;

		result = bi1 + bi1;

		std::cout << "This is the result of adding bigint 1 and 2: " <<  result << std::endl;
} 
    in.close();
    return 0;
}

