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
	x.push(4);
	x.push(5);
	x.push(6);
	x.push(7);

	stack<int> copy(x);

        // VERIFY
        assert(copy.top() == 7);
	std::cout << "Testing copy constructor for int type" << std::endl; 
     }

        {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push(String("Hello"));
        x.push(String("World"));
        x.push(String("Testing"));

        stack<String> copy(x);

        // VERIFY
        assert(copy.top() == "Testing");

        std::cout << "Testing copy constructor for String type" << std::endl; 
     }

	{
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;
        x.push(String("Hello"));

        stack<String> copy(x);

        // VERIFY
        assert(copy.top() == "Hello");

     }

      	{
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;
        x.push('x');
        x.push('y');
        x.push('z');

        stack<char> copy(x);

        // VERIFY
        assert(copy.top() == 'z');

        std::cout << "Testing copy constructor for char type" << std::endl << std::endl; 
     }


    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing copy constructor." << std::endl;
}


