// reading a text file
#include <iostream>
#include <fstream>


void untilWhite() {
	std::ifstream file ("fileio-data-1.txt");

	if(!file.is_open()) {
     		 std::cout << "Unable to open file\n";
 	 }

	char ch;
	file.get(ch);
   	 while(!file.eof()) {

		if(ch == ' ') {
			break;
		}

       		 std::cout << ch;
      		 file.get(ch);
   	 }

	 std::cout << '\n';
   	 file.close();



}

void addsNum() {
        std::ifstream file ("fileio-data-1.txt");

        if(!file.is_open()) {
                 std::cout << "Unable to open file\n";
         }

	int one = 0;
	int two = 0;
	int counter = 1;
	int result;
	char ch;
 
         while(file >> ch) {

		if (counter == 3) {
			break;
		}
		if(ch == ';') {
			counter++;
			continue;
		}

		if(counter == 1) {
			one = one*10;
			one += ch - '0';
		}

		if(counter == 2) {
			two = two*10;
			two += ch - '0';
		}

         }

	result = one + two;
         std::cout << "The result of adding the first two numbers in the data text file is " << result << std::endl;

         std::cout << '\n';
         file.close();
}



int main () {


     untilWhite();
	addsNum();

}
