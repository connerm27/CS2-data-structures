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

        // TEST
        x.push(3);
	std::cout << "Pushing 3... " << std::endl;
        // VERIFY
        assert(x.top() == 3);
	std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }

    {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(3);
	std::cout << "Pushing 3..." << std::endl;

	x.push(6);
	std::cout << "Pushing 6..." << std::endl;
        // VERIFY
        assert(x.top() == 6);
	std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }

     {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<int>  x;

        // TEST
        x.push(3);
        std::cout << "Pushing 3..." << std::endl;

        x.push(6);
        std::cout << "Pushing 6..." << std::endl;


	x.pop();
	std::cout << "Popping top value..." << std::endl;
	  // VERIFY
        assert(x.top() == 3);
        std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }

       {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('a');
        std::cout << "Pushing a... " << std::endl;
        // VERIFY
        assert(x.top() == 'a');
        std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }

        {
     	//------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('x');
        std::cout << "Pushing x..." << std::endl;

        x.push('z');
        std::cout << "Pushing z..." << std::endl;
        // VERIFY
        assert(x.top() == 'z');
        std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }

	        {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<char>  x;

        // TEST
        x.push('x');
        std::cout << "Pushing x..." << std::endl;

        x.push('z');
        std::cout << "Pushing z..." << std::endl;

	x.pop();
	std::cout << "Popping top value..." << std::endl;

	 // VERIFY
        assert(x.top() == 'x');
        std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }

     {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push(String("Hello"));
      	std::cout << "Pushing 'Hello'... " << std::endl;
        // VERIFY
        assert(x.top() == "Hello");
        std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }

	    {
        //------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push(String("Hello"));
        std::cout << "Pushing 'Hello'..." << std::endl;

        x.push(String('a'));
        std::cout << "Pushing 'a'..." << std::endl;

	x.push(String("Testing"));
        std::cout << "Pushing 'Testing'..." << std::endl;

        // VERIFY
        assert(x.top() == "Testing");
     	std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }
	
            {
	//------------------------------------------------------
        // SETUP FIXTURE
        stack<String>  x;

        // TEST
        x.push(String("Hello"));
        std::cout << "Pushing 'Hello'..." << std::endl;

        x.push(String('a'));
        std::cout << "Pushing 'a'..." << std::endl;

        x.push(String("Testing"));
        std::cout << "Pushing 'Testing'..." << std::endl;

	x.pop();
	std::cout << "Popping top value..." << std::endl;
	x.pop();
	std::cout << "Popping top value.." << std::endl;


        // VERIFY
        assert(x.top() == "Hello");
        std::cout << "Top of Stack: " << x.top() << std::endl << std::endl;
     }
    // ADD ADDITIONAL TESTS AS NECESSARY

    std::cout << "Done testing push and pop." << std::endl;
}





