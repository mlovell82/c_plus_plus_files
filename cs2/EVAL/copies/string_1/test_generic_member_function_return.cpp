//  String class test program
//
//  Tests: XXX
//

#include "string.hpp"
#include <cassert>
#include <iostream>

//===========================================================================
int main ()
{
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcd");

        // TEST
        char result = str[0];
	str[1] = 'a';
        // VERIFY
        assert(str == "aacd");
        assert(result == 'a');
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcde");

        // TEST
        int result = str.length();

        // VERIFY
	
        assert(result == 5);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcde");

        // TEST
        int result = str.capacity();

        // VERIFY
        assert(result == 251);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcdef");
	// TEST
        String result = str.substr(1,3);

        // VERIFY
        assert(result == "bcd");
    }
        
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcdef");
	char finder[3] = {'c','d','\0'};
        // TEST
        int result = str.findstr(2,"finder");

        // VERIFY
	std::cout << result;
        //assert(result == 1);
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE
        String  str("abcdef");

        // TEST
        int result = str.findchar('c');

        // VERIFY
        assert(result == 2);
    }
    {
      //------------------------------------------------------
      // SETUP FIXTURE

      String  str('a');
      char b = 'b';
      for (int i = 0; i < 3; ++i)
	str = str + b;
      // TEST
      int result = str.length();

      // VERIFY
      //      assert(result == 15);
      std::cout << result;
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing XXX." << std::endl;
}

