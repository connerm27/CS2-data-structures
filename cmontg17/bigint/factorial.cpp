#include <iostream>
#include "bigint.hpp"


int main() {


bigint bi;

bi.factorial(100);


std::cout << "The number of trailing zeros on 100! is " << bi << std::endl;

std::cout << "I calculated this answer by finding the factorial of 100, storing this factorial into a bigint and then looping through and counting the trailing zero's on this bigint." << std::endl << std::endl;

std::cout << "To find the number of trailing zeros on a factorial mathematically, you simply keep dividing the number by 5 until the number is less than 5.";
std::cout << " You then add the number less than 5 to the last number you got dividing by 5. Ex.) 100!: 100/5 = 20; 20/5 = 4; 20 + 4 = 24. Trailing zeros on 100! == 24 " << std::endl;



return 0;
}
