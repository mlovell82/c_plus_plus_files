#include <iostream>
#include "string.hpp"
#include <cassert>

int main(){

  {

    String one("abc");

    String three = one;

    assert(one == "abc");
    assert(three == "abc");




  }
}
