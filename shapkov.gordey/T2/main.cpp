#include <iostream>
#include "types.hpp"
#include <sstream>
#include <delimiter.hpp>

int main()
{
  shapkov::ratioIO param;
  std::istringstream input("(:N -23333333333 :D 2234  :)");
  std::istringstream input1("5.45d");
  std::istringstream input2("\"Data\"");
  //input1 >> param;
  //shapkov::doubleScientificIO param1;
  shapkov::stringIO param3;
  input2 >> param3;
  //input1 >> param1 >> shapkov::delimiterIO{ 'd' };
  if (input2)
  {
    //std::cout << param.key.first << " " << param.key.second << '\n';
    std::cout << param3.key << '\n';
  }
  else
  {
    std::cout << ":(\n";
  }
}
