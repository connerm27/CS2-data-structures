//  Stack class test program
//
//  Tests: XXX
//

#include "stack.hpp"
#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;
	x.push(1);
//	std::cout << x.top() << std::endl;
	x.push(2);
//	std::cout << x.top() << std::endl;
	x.push(3);
//	std::cout << x.top() << std::endl;
	x.push(4);
//	std::cout << x.top() << std::endl;
	x.push(5);
//	std::cout << x.top() << std::endl;

//	std::cout << "X created" << std::endl;
//	std::cout << "Top value: " << x.top() << std::endl;
	
	stack<int> y;

//	std::cout << "Y created" << std::endl;
	y = x;
	std::cout << "Testing int stack assigned to int stack" << std::endl;
//	std::cout << "y = x called" << std::endl;
//	std::cout << y.top() << std::endl;

	 // VERIFY
        assert(y.top() == 5);
     }

        {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push(String("Hello"));
        x.push(String("World"));
        x.push(String("Testing"));

        stack<String> y;
        y = x;

	std::cout << "Testing String stack assigned to String stack" << std::endl;

        // VERIFY
        assert(y.top() == x.top());
     }
      	{
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push(String("Hello"));

        stack<String> y;
        y = x;


        // VERIFY
        assert(y.top() == x.top());
     }


	{
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('a');
        x.push('b');
        x.push('c');

        stack<char> y;
        y = x;

        std::cout << "Testing char stack assigned to char stack" << std::endl << std::endl;

        // VERIFY
        assert(y.top() == x.top());
     }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing assignment operator." << std::endl;
}


