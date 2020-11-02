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

        // TEST
        // Create test for string, character, etc...
        stack<int>  x;
	std::cout << "Testing default constructor for type int" << std::endl;
        // VERIFY
        assert(x.empty());
    }

    {
      	//------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        // Create test for string, character, etc...
        stack<char>  x;
	std::cout << "Testing default constructor for type char" << std::endl;
        // VERIFY
        assert(x.empty());
    }



     {
     	//------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        // Create test for string, character, etc...
        stack<String>  x;
	std::cout << "Testing default constructor for type String" << std::endl << std::endl;
        // VERIFY
        assert(x.empty());
    }





    // ADD ADDITIONAL TESTS AS NECESSARY

    std::cout << "Done testing default constructorX." << std::endl;

}



