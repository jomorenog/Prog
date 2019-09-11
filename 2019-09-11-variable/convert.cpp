#include <iostream>

int main(void)
{
  double x = 0.0;
  
  std::cout << "Escribe el numero en millas"<< std::endl;
  std::cin >> x;
  x = x*1.609;
  std::cout << " Magnitud en kilometros : " << x << std::endl;
  
  return 0;
}
