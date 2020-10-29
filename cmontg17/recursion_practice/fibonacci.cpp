#include <iostream>

int fib(int n) {
  if (n <= 1)
    return n;
 return fib(n-1) + fib(n-2);
}



//----------------------------------For Tail recursion


#include <iostream>

int fibtr(int n, int zero = 0, int one = 1) {
if (zero == 0 && one == 1) {
	std::cout << zero << std::endl;
	std::cout << one << std::endl;
}

  if (n == 0){ 
   return zero;
}
 if (n == 1) { 
   return one;
	}
if(zero+one != 34) {
std::cout << zero+one <<std::endl;
}
  return fibtr(n-1, one, zero + one);
}

int main() {
	int input = 9;
  std::cout << "Fibonacci of " << input << ": " << fib(input) << "\n";
  std::cout << "Trail recursion.." << std::endl;
  std::cout << "Fibonacci of " << input << ": " <<  fibtr(input) << "\n";




 return 0;
}

