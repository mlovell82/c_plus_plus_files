/**
 * Michael Lovell
 * bigint.hpp
 * cs23001
 */
// This program is the headerfile for the bigint class

# ifndef BIGINT_HPP
# define BIGINT_HPP
# include <iostream>
const int size = 550; // cap const like MAX_DIGITS
class bigint {
public:
  bigint(); //default constructor
  bigint(int); //constructor with an integer parameter
  bigint(const char[]); //constructor with a char array parameter
  friend std::ostream& operator<<(std::ostream&, const bigint); //output operator
  bool operator==(const bigint&)const;
  bigint operator+(const bigint&);
  int operator[](int)const;

  friend std::ifstream& operator>>(std::ifstream&, bigint&);
private:
  
  int bigint_array[size];
  
};

# endif
