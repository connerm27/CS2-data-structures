#include "string.hpp"
#include "utilities.hpp"
#include <fstream>
#include <iostream>


int main(int argc, char *argv[]) {


	if(argc < 1) {
        	std::cout << "Could not find file" << std::endl;
		return 0;
	}


	std::ifstream in (argv [1]);
	if ( !in.is_open()) {
		std::cout << "Could not open file\n";
		return 1;
	}

	std::ofstream out (argv [2]);


std::vector<String> v1;
String s;
while(in>>s) {

	if(argc == 2) {
		if(in.eof()) {
			break;
		}


		if(s != ";") {
			v1.push_back(s);
		//	std::cout << "Made it in end of line if" << std::endl;
		} else {
		//	std::cout << "made it to else" << std::endl;
			String semi(";");
			v1.push_back(semi);
			std::cout << "Infix: ";
			for(int i=0; i < v1.size(); ++i) {
				std::cout << v1.at(i) << " ";
			}
			std::cout << "\n";

			String rlt = infix_to_postfix(v1);
			std::cout << "Postfix: " <<  rlt << std::endl << std::endl;
			v1.clear();
		}

	}

	if(argc == 3) {
		 if(in.eof()) {
                        break;
                }


                if(s != ";") {
                        v1.push_back(s);
                //      std::cout << "Made it in end of line if" << std::endl;
                } else {
                //      std::cout << "made it to else" << std::endl;
                        String semi(";");
                        v1.push_back(semi);
                       // std::cout << "Infix: ";
                       // for(int i=0; i < v1.size(); ++i) {
                         //       std::cout << v1.at(i) << " ";
                       // }
                       // std::cout << "\n";

                        String rlt = infix_to_postfix(v1);
                        out << rlt << "\n";
                        v1.clear();
                }
	}
}

in.close();
return 0;

}






