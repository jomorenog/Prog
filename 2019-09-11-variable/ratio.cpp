#include <iostream>
#include <cmath>

int main(void)
{
  int val1 =0.0;
  int val2 =0.0;
   

  std::cout << "Escribe val1"<< std::endl;
  std::cin >> val1;
  std::cout << "Escribe val2"<< std::endl;
  std::cin >> val2;

  if (val1<val2)
    {
      std::cout << "smaller  :"<< val1<<  std::endl;
      std::cout << "larger   :"<< val2<< std::endl;
    }
  else
    {
      std::cout << "samaller  val2: "<< val2 << std::endl;
      std::cout << "larger  val1: "<< val1 << std::endl;
    }
  int  sum  = val1+val2;
  int dif = val1-val2;
  int prod =val1*val2;
  int rat =val1/val2;
  std::cout << " suma : " << sum  << std::endl;
  std::cout << " diference : " << dif << std::endl;
  std::cout << " product : " << prod << std::endl;
  std::cout << " ratio : " << rat << std::endl;
  
  
  
  return 0;
}
