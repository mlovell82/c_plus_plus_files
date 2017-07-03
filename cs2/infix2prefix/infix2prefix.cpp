#include"string.hpp"
#include"stack.hpp"
#include<iostream>
#include<fstream>
int main(){
 
  std::ifstream file("data3-1.txt");
  if(!file.is_open()){
    std::cout << "Unable to open file";
  }
  stack<String> prefix;
  stack<String> infix;
  String temp;
  String op;
  while(!file.eof()){
    String result;
    file >> temp;
    if ((temp != "(") && (temp != ")") && (temp != ";"))
      infix.push(temp);
    if(temp == ")"){
      op = infix.getTos(); 
      infix.pop();
      result = result + infix.getTos();
      result = result + op;
      infix.pop();
      result = result + infix.getTos();
      infix.pop();
      infix.push(result);
      
  }
    if (temp == ";")
      std::cout << infix.getTos() << std::endl;    
  }
    
  file.close();
}
