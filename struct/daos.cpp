#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>

int main (void)
{
  const int M=2, N=11, tiros=60;

  srand(time(NULL));

  std::vector<std::vector <int>> matriz {{2,3,4,5,6,7,8,9,10,11,12},
                                         {0,0,0,0,0,0,0,0,0,0,0}};

  int dado1=0, dado2=0, sum=0;

  for (int i=1; i<=tiros; i++)
    {
      dado1 = 1 + rand()%6;
      dado2 = 1 + rand()%6;
      sum= dado1 + dado2;
   
      for (int j=2; j<=12; j++){
	if( sum==j)
	  {
	    matriz[1][j-2]++;
	  }
      }
    }

  for(int i=0; i<M; i++)
    {
      for (int j=0; j<N; j++)
	{
	  std::cout<< matriz[i][j]<< " " ;
	}
      std::cout<<"\n";
    }
 
    return 0;
}
