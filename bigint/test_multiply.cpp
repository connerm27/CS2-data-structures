// bigint Test Program
//
// Tests:  multiply, uses ==
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"

//===========================================================================
int main () {
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;
	        
        // Test 
        result = left * right;
        
	std::cout <<  left << " * " << right << " == " << result << std::endl;

        // Verify
        assert(left   == 0);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(1);
        bigint right(0);
        bigint result;
        
        // Test 
        result = left * right;
       
	std::cout <<  left << " * " << right << " == " << result << std::endl;
 
        // Verify
        assert(left   == 1);
        assert(right  == 0);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(1);
        bigint result;
        
        // Test 
        result = left * right;
        
	std::cout <<  left << " * " << right << " == " << result << std::endl;

        // Verify
        assert(left   == 0);
        assert(right  == 1);
        assert(result == 0);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(123);
        bigint right(56);
        bigint result;
        
        // Test 
        result = left * right;
	std::cout <<  left << " * " << right << " == " << result << std::endl;        
        // Verify
        assert(left   ==  123);
        assert(right  ==   56);
        assert(result == 6888);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(65);
        bigint right(321);
        bigint result;
        
        // Test 
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        // Verify
        assert(left   ==    65);
        assert(right  ==   321);
        assert(result == 20865);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(9999);
        bigint right(2);
        bigint result;
        
        // Test 
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        // Verify
        assert(left   ==  9999);
        assert(right  ==     2);
        assert(result == 19998);
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(2);
        bigint right(999999);
        bigint result;
        
        // Test 
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        // Verify
        assert(left   ==       2);
        assert(right  ==  999999);
        assert(result == 1999998);
    }
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left(99);
        bigint right(99);
        bigint result;

        // Test
        result = left * right;
	std::cout <<  left << " * " << right << " == " << result << std::endl;
        // Verify
        assert(left   ==  99);
        assert(right  ==  99);
        assert(result ==  9801);
    }


    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("2222");
        bigint right("888888888888888888888888888888888888");
        bigint result;
        
        // Test 
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        // Verify
        assert(left   == "2222");
        assert(right  == "888888888888888888888888888888888888");
        assert(result == "1975111111111111111111111111111111109136");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("777777777777777777777777777777777777777777777");
        bigint right("333333");
        bigint result;
        
        // Test 
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        // Verify
        assert(left   == "777777777777777777777777777777777777777777777");
        assert(right  == "333333");
        assert(result == "259258999999999999999999999999999999999999999740741");
    }
    
    {
        //------------------------------------------------------
        // Setup fixture
        bigint left("111111111111111111111111111111111111111111");
        bigint right("999999999999999999999999999999999999999999");
        bigint result;
        
        // Test 
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        // Verify
        assert(left   == "111111111111111111111111111111111111111111");
        assert(right  == "999999999999999999999999999999999999999999");
        assert(result == "111111111111111111111111111111111111111110888888888888888888888888888888888888888889");
    }
    
    //Add test cases as needed.
    {
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(333);
        bigint right(333);
        bigint result;

        //Test
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        //Verify
        assert(left == 333);
        assert(right == 333);
        assert(result == 110889);

    }
	    {
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left("0");
        bigint right("0");
        bigint result;

        //Test
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        //Verify
        assert(left == "0");
        assert(right == "0");
        assert(result == "0");

    }
	    {
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left("0");
        bigint right("1");
        bigint result;

        //Test
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        //Verify
        assert(left == "0");
        assert(right == "1");
        assert(result == "0");

    }
	    {
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left("75");
        bigint right("100");
        bigint result;

        //Test
        result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        //Verify
        assert(left == "75");
        assert(right == "100");
        assert(result == "7500");

    }

            {
          
          //-----------------------------------------------------
      // Setup Fixture     
        bigint left("2");
        bigint right("2");
        bigint result;

        //Test
	result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        //Verify
        assert(left == "2");
        assert(right == "2");
        assert(result == "4");

    }

            {
          
          //-----------------------------------------------------
      // Setup Fixture     
        bigint left("9");
        bigint right("1");
        bigint result;

        //Test
	result = left * right;
        std::cout <<  left << " * " << right << " == " << result << std::endl;
        //Verify
        assert(left == "9");
        assert(right == "1");
        assert(result == "9");

    }


    std::cout << "Done testing multiply" << std::endl;
}
