// bigint Test Program
//
// Tests:  subscript, uses ==
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
        assert(bi    == 4);  //Wrong.  Add test cases.
        assert(digit == 4);
    }
    {
      // Setup
      bigint bi;

      // Test
      int first_digit = bi[0];
      int mid_digit = bi[25];
      int last_digit = bi[49];
      // Verify
      assert(bi    == 0);  //Wrong.  Add test cases.
      assert(first_digit == 0);
      assert(mid_digit == 0);
      assert(last_digit == 0);
    }
    {
      // Setup
      bigint bi(1);

      // Test
      int first_digit = bi[0];
      int mid_digit = bi[25];
      int last_digit = bi[49];
      // Verify
      assert(bi    == 1);  //Wrong.  Add test cases.
      assert(first_digit == 1);
      assert(mid_digit == 0);
      assert(last_digit == 0);
    }
    {
      // Setup
      bigint bi("123");

      // Test
      int first_digit = bi[0];
      int mid_digit = bi[25];
      int last_digit = bi[49];
      // Verify
      assert(bi    == 123);  //Wrong.  Add test cases.
      assert(first_digit == 3);
      assert(mid_digit == 0);
      assert(last_digit == 0);
    }
    {
      // Setup
      bigint bi("11111111111111111111111111111");

      // Test
      int first_digit = bi[0];
      int mid_digit = bi[25];
      int last_digit = bi[49];
      // Verify
     
      assert(first_digit == 1);
      assert(mid_digit == 1);
      assert(last_digit == 0);
    }

    

    std::cout << "Done testing subscript." << std::endl;
}

