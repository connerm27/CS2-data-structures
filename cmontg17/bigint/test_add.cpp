// bigint Test Program
//
// Tests:  int constructor, uses ==
//
// NEED TO IMPLEMENT
//
#include <iostream>
#include <cassert>
#include "bigint.hpp"


//===========================================================================
int main () {
    {

        // VERY INCOMPLETE set of tests.


        //------------------------------------------------------
        // Setup fixture
        bigint left(0);
        bigint right(0);
        bigint result;

        // Test
        result = left + right;

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
      result = left + right;




      // Verify
      assert(left   == 1);
      assert(right  == 0);
      assert(result == 1);
    }
    {
      //------------------------------------------------------
      // Setup fixture
      bigint left(1);
      bigint right(1);
      bigint result;

      // Test
      result = left + right;

      // Verify
      assert(left   == 1);
      assert(right  == 1);
      assert(result == 2);
    }

    //Add test cases as needed.
    {
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(334);
        bigint right(882);
        bigint result;

        //Test
        result = left + right;

        //Verify
        assert(left == 334);
        assert(right == 882);
        assert(result == 1216);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(168);
        bigint right(1243);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 168);
        assert(right == 1243);
        assert(result == 1411);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(877);
        bigint right(26);
        bigint result;
	
        //Test
        result = left + right;
        
        //Verify
        assert(left == 877);
        assert(right == 26);
        assert(result == 903);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(999);
        bigint right(0);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 999);
        assert(right == 0);
        assert(result == 999);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(123);
        bigint right(777);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 123);
        assert(right == 777);
        assert(result == 900);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(274);
        bigint right(1500);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 274);
        assert(right == 1500);
        assert(result == 1774);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(175);
        bigint right(25);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 175);
        assert(right == 25);
        assert(result == 200);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(467);
        bigint right(0);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 467);
        assert(right == 0);
        assert(result == 467);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(999);
        bigint right(999);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 999);
        assert(right == 999);
        assert(result == 1998);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(100);
        bigint right(1900);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 100);
        assert(right == 1900);
        assert(result == 2000);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(995);
        bigint right(9);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 995);
        assert(right == 9);
        assert(result == 1004);

    }
	{
	  
	  //-----------------------------------------------------
      // Setup Fixture     
        bigint left(1200);
        bigint right(0);
        bigint result;

        //Test
        result = left + right;
        
        //Verify
        assert(left == 1200);
        assert(right == 0);
        assert(result == 1200);

    }

    std::cout << "Done with testing addition." << std::endl;
}

