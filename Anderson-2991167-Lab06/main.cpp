#include "Executive.h"
#include <stdexcept>
#include <iostream>
int main()
{
  Executive exec;
  try
  {
      exec.run();
  }
  catch(std::runtime_error& e)
  {
      std::cout << e.what();
  }
  return(0);
}
