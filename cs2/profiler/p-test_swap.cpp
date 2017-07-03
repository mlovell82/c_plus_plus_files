#include <iostream>
#include "profile.hpp"
profile test_swap_cpp("test_swap_cpp");
#include <fstream>
#include <iomanip>
#include <cassert>
#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include "ASTree.hpp"



int main(){test_swap_cpp.count(__LINE__, "main");

  {
    
    srcML tom, dick, harry;
    
    std::ifstream file("simple.cpp.xml");
    if(!file){
      std::cerr << "could not open file" << std::endl;test_swap_cpp.count(__LINE__);
      exit(1);test_swap_cpp.count(__LINE__);
    }
    
    
    file >> tom;

    
    dick.swap(tom); // empty.swap(full)
    std::cout << "Swap 1";
    std::cout << dick << std::endl;
    
    tom.swap(harry); // empty.swap(empty)
    std::cout << "Swap 2";
    
    //std::cout << tom << std::endl;

    //harry.swap(dick);
    //std::cout << "Swap 3";
    //std::cout << harry << std::endl;
  
    harry = dick;
    std::cout << "Equal 1";
    std::cout << harry << std::endl;
    
    harry.swap(dick);
    dick.swap(harry);
    std::cout << "Swap 4";
    std::cout << dick << std::endl;

    //    harry = tom;
    std::cout << "Equal 2";
    //    std::cout << harry << std::endl;

    //tom = harry;
    //std::cout << "Equal 3";
    //std::cout << tom << std::endl;

    tom = dick;
    std::cout << "Equal 4";
    std::cout << tom << std::endl;
  }
}


