#include <iostream>
#include <string>

bool testPalindrome ( std::string word);

int main (void)
{
  std::string p="radar";
  
  std::cout<< " Write a word or phrase"<<"\n";
  std::getline ( std::cin, p);

    if ( testPalindrome (p))
      {
	std::cout<< "Palindrome"<< "\n";
      }
    else
      
      {
	std::cout<< " No Palindrome"<< "\n";
      }
      
  
  return 0;
}


bool  testPalindrome ( std::string word)
{
  bool l= false;
  int same=0;
  for (int i=0; i< (word.size()/2+word.size()%2); i++)
    {
      if ( word[i]==word[word.size()-1-i])
	{
	  same++;
	}
    }


      if (same==word.size()/2+word.size()%2)
	{
	  l=true;
	}
 

  return l;
}
