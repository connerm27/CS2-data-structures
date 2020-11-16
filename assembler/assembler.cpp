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
while(in>>s) {  if(argc == 2) {





                 if(in.eof()) {
                        break;
                }


                if(s != ";") {
                        v1.push_back(s);
                } else {
                        String semi(";");
                        v1.push_back(semi);
                        String temp;
                        std::cout << "Infix: ";
                        for (int i=0; i<v1.size(); ++i) {
                                if(v1.at(i) != ";") {
                                       std::cout << v1.at(i) << " ";
                                } else {
                                        std::cout << v1.at(i);
                                }
                        }

                        String rlt = infix_to_postfix(v1);
                        std::cout << "\nPostfix: " << rlt << "\n"; 
                        evaluate(rlt, std::cout);
                        std::cout << "\n";

                        std::cout << "Prefix: ";
                        String prefix = infix_to_prefix(v1);
                        std::cout << prefix << "\n\n";
                        evaluate(rlt, std::cout);
                        std::cout << "\n";

                         v1.clear();
                }

        }
	if(argc == 3) {
                 if(in.eof()) {
                        break;
                }


                if(s != ";") {
                        v1.push_back(s);
                } else {
                        String semi(";");
                        v1.push_back(semi);
			String temp;
			out << "Infix: ";
			for (int i=0; i<v1.size(); ++i) {
				if(v1.at(i) != ";") {
					out << v1.at(i) << " ";
				} else {
					out << v1.at(i);
				}
			}

			String rlt = infix_to_postfix(v1);
                  	out << "\nPostfix: " << rlt << "\n"; 
			evaluate(rlt, out);
			out << "\n";

			out << "Prefix: ";
			String prefix = infix_to_prefix(v1);
			out << prefix << "\n\n";
			evaluate(rlt, out);
			out << "\n";

			 v1.clear();
                }
        }
}

in.close();
return 0;

}

