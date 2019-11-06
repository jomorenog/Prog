#include <iostream>
#include <vector>

int main (void)
{
  int N= 20;
  int num=0;
  int dup=0;
  int m=0;
  std::vector<int> numbers={0};

  for (int i=0; i<N; i++)
    {
      std::cin>>num;

      if (num>=10 && num<=100)
	{
	  for (int j=0; j<m; j++)
	    {
	      if (numbers[j]==num)
		{
		  dup=1;
		  break;
		}
	      else
		{
		  dup=0;
		}
	    }
	  if (dup==0)
	    {
	      numbers[m]=num;
	      m++;
	      dup=0;
	    }
	}

      else
	{
	  std::cout<<"numero invalido"<<"\n";
	  i--;
	}
    }

  for ( int i=0; i<m; i++)
    {
      std::cout<< numbers[i]<<" ";
    }
  std::cout<< "\n";

  return 0;
    }

