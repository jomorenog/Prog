#include <iostream>

int main(void)

{
  int x {0.0};
  int y {0.0};
  int z {0.0};

  std::cout << " Escriba tres  numeros:"<<'\n';
  std::cin >> x;
  std::cin >> y;
  std::cin >> z;

  if (x<=y && x<=z)
    {
      if (y<z)

	{
	  std::cout<< " El orden de los numeros es: "<< x << "," << y << "," << z << '\n';
	}
      else
	{
	  std::cout<< " El orden de los numeros es: " << x << "," << z << "," << y << '\n';
	}
    }

  if (y<x && y<=z)
    {
      if (x<z)

	{
	  std::cout<< " El orden de los numeros es: "<< y << "," << x << "," << z << '\n';
	}
      else
	{
	  std::cout<< " El orden de los numeros es: "<< y << "," << z << "," << x << '\n';
	}
    }
  if (z<x && z<y)
    {
      if (x<y)

	{
	  std::cout<< " El orden de los numeros es: "<< z << "," << x << "," << y << '\n';
	}
      else
	{
	  std::cout<< " El orden de los numeros es: "<< z << "," << y << "," << x << '\n';
	}
    }

  
  
}
  
  
