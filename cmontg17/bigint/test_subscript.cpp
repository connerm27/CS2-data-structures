// bigint Test Program
//
// Tests:  subscript, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        // Setup
        bigint bi(4);

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi    == 4);  //Wrong.  Will FAIL.  Fix and add test cases.
        assert(digit == 4);

	std::cout << "bi  == " << bi;
	std::cout << "  bi[0] == " << digit << std::endl << std::endl;
	
    }
    
    //Add test cases!!

    {
     	// Setup
        bigint bi(87);

        //Test
	int digit = bi[0];


        // Verify
        assert(bi == 87);  
        assert(digit == 7);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[0] == " << digit << std::endl << std::endl;
    }
    {
     	// Setup
        bigint bi(87);

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi == 87);  
        assert(digit == 8);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[1] == " << digit << std::endl << std::endl;
    }
	{
     	// Setup
        bigint bi(622);

        // Test 
        int digit = bi[2];

        // Verify
        assert(bi == 622);  
        assert(digit == 6);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[2] == " << digit << std::endl << std::endl;

    }
	{
     	// Setup
        bigint bi(1783);

        // Test 
        int digit = bi[3];

        // Verify
        assert(bi == 1783);  
        assert(digit == 1);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[3] == " << digit << std::endl << std::endl;

    }
	{
     	// Setup
        bigint bi(17835);

        // Test 
        int digit = bi[4];

        // Verify
        assert(bi == 17835);  
        assert(digit == 1);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[4] == " << digit << std::endl << std::endl;

    }
		{
     	// Setup
        bigint bi(19878);

        // Test 
        int digit = bi[3];

        // Verify
        assert(bi == 19878);  
        assert(digit == 9);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[3] == " << digit << std::endl << std::endl;

    }
	
	
	{
     	// Setup
        bigint bi(4390);

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi == 4390);  
        assert(digit == 9);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[1] == " << digit << std::endl << std::endl;

    }
	
	
	
		{
     	// Setup
        bigint bi("1900");

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi == "1900");  
        assert(digit == 0);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[0] == " << digit << std::endl << std::endl;

    }

		{
     	// Setup
        bigint bi("1");

        // Test 
        int digit = bi[0];

        // Verify
        assert(bi == "1");  
        assert(digit == 1);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[0] == " << digit << std::endl << std::endl;
    }
		{
     	// Setup
        bigint bi("12345689");

        // Test 
        int digit = bi[2];

        // Verify
        assert(bi == "12345689");  
        assert(digit == 6);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[2] == " << digit << std::endl << std::endl;

    }
    {
     	// Setup
        bigint bi("27");

        // Test 
        int digit = bi[1];

        // Verify
        assert(bi == "27");  
        assert(digit == 2);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[1] == " << digit << std::endl << std::endl;
    }
    {
     	// Setup
        bigint bi("4388");

        // Test 
        int digit = bi[3];

        // Verify
        assert(bi == "4388");  
        assert(digit == 4);

	std::cout << "bi  == " << bi;
        std::cout << "  bi[3] == " << digit << std::endl;
    }
		


    std::cout << "Done testing subscript." << std::endl;
}

