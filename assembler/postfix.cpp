#include "string.hpp"
#include "utilities.hpp"
#include <fstream>
#include <iostream>

int main(int argc, char *argv[]) {

if(argc < 1) {
        std::cout << "Could not find file" << std::endl;
	return 0;
}

	std::ifstream in (argv[1]);

if(!in) {
	std::cout << "File could not be found!" << std::endl;
	return 0;
}

if(argc < 3) {
	char c;
	String s;
	while(!in.eof()) {
		in.get(c);
		//std::cout << "This is c: " << c <<  std::endl;
		if(in.eof()) {

			break;
		}

		if(c != ';') {
			s += c;
		//	std::cout << s << std::endl;

		} else {
			s+= ';';
			std::cout << "Infix: "  << s << std::endl;
			String rlt;
			rlt = infix_to_postfix(s);
			std::cout << "Postfix: " << rlt << std::endl << std::endl;

		//	Empty the string;
			s = "";
		}

	}

} else {

	std::ofstream out (argv[2]);
	if(!out) {
		std::cout << "File could not be found!" << std::endl;
		return 0;
	}

	char c;
        String s;
        while(!in.eof()) {
                in.get(c);
                //std::cout << "This is c: " << c <<  std::endl;
                if(in.eof()) {

                        break;
                }

                if(c != ';') {
                    	s += c;
                //      std::cout << s << std::endl;

                } else {
                        s+= ';';
			out << s;
                        String rlt;
                        rlt = infix_to_postfix(s);
			out << rlt;

                        s = "";
                }

        }


}

}
