#include "string.hpp"
#include <iostream>
#include <fstream>
#include <cstdlib>


int main() {

	std::ifstream in("data1-1.txt");
	if(!in) {
		std::cerr << "Could not open data1-1.txt, exiting." << std::endl;
		exit(1);
	}


	while(!in.eof()) {

		String str;
		if(!in.eof())
			in >> str;
		std::cout << str << std::endl;
	}

in.close();


std::cout << "Done testing input" << std::endl; 


}









