// this program converts spell -out number into digits

#include <iostream>
#include <string>

int main (void)

{
  std::string word0 = "one";
  std ::cout << "Spell- out a integer number " << "\n"; 
  std::cin >> word0;

 


  if  ( word0== "zero" xor word0== "one"xor word0== "two"xor word0== "three"xor word0== "four" )
    {
      if ( word0== "zero" && word0!= "one" && word0 != "two" && word0!= "three" && word0!= "four" )
      	{
	  std ::cout <<" 0 " << "\n";
	}
       if ( word0!= "zero" && word0== "one" && word0 != "two" && word0!= "three" && word0!= "four" )
      	{
	  std ::cout <<" 1 " << "\n";
	}
        if ( word0!= "zero" && word0!= "one" && word0 == "two" && word0!= "three" && word0!= "four" )
      	{
	  std ::cout <<" 2 " << "\n";
	}
	 if ( word0!= "zero" && word0!= "one" && word0 != "two" && word0== "three" && word0!= "four" )
      	{
	  std ::cout <<" 3 " << "\n";
	}
	  if ( word0!= "zero" && word0!= "one" && word0 != "two" && word0!= "three" && word0== "four" )
      	{
	  std ::cout <<" 4 " << "\n";
	}
    }
	  

  else

    {
      
      std ::cout <<" sorry !, i am a stupid pc" << "\n";
}
	  
      
 
  
    
  

  return 0;
}
