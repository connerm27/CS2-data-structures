#include <fstream>
#include <iostream>
#include "stack.hpp"
#include "string.hpp"
#include "string.cpp"

String infix_to_prefix(std::vector<String> v1) {

int i = 0;

stack<String> final;

while(v1.at(i) != ';') {

if(v1.at(i) == ')') {

        String right = final.pop();
       // right += " ";
        String oper = final.pop();
        oper += " ";
        String left = final.pop();
        left += " ";

        String fullExp = oper + left + right;

        final.push(fullExp);

} else {

        if(v1.at(i) != '(') {
                final.push(v1.at(i));
        }
}

i++;

}

return final.top() + " ;";

}


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
                } else {
                        String semi(";");
                        v1.push_back(semi);
                        std::cout << "Infix: ";
                        for(int i=0; i < v1.size(); ++i) {
                                std::cout << v1.at(i) << " ";
                        }
                        std::cout << "\n";

                        String rlt = infix_to_prefix(v1);
                        std::cout << "Prefix: " <<  rlt << std::endl << std::endl;
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
			out << "Infix: ";
			for(int i = 0; i < v1.size(); ++i) {
				out << v1.at(i) << " ";
			}
                        String rlt = infix_to_prefix(v1);
                        out << "\nPrefix: " << rlt << "\n\n";
                        v1.clear();
                }
        }
}

in.close();
return 0;

}

