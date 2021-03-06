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

        // TEST
        String  str;

        // VERIFY
	std::cout << str;
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
      String  str('z');

        // VERIFY
        assert(str == 'z');
	std::cout << str << std::endl;
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("xyz");

        // VERIFY
        assert(str == "xyz");
	std::cout << str << std::endl;
    }
    
    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("abcdefghijklmnopqrstuvwxyz");

        // VERIFY
        assert(str == "abcdefghijklmnopqrstuvwxyz");
    }

    {
        //------------------------------------------------------
        // SETUP FIXTURE

        // TEST
        String  str("123456789");

        // VERIFY
        assert(str == "123456789");
    }

    // ADD ADDITIONAL TESTS AS NECESSARY
    
    std::cout << "Done testing XXX." << std::endl;

}

