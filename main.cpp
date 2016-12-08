#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <iterator>


bool compare(std::string s1, std::string s2)
{
  int sum1 = 0, sum2 = 0, val;
  bool result;
  std::string::const_iterator it1 = s1.begin();
  std::string::const_iterator it2 = s2.begin();
  std::cout << "sum1: " << sum1 << "  sum2: " << sum2 << '\n'; 
  int  len1 = static_cast<int>(s1.length()); 
  int  len2 = static_cast<int>(s2.length()); 
  std::cout << "sum1 length: " << len1 << "  sum2 length: " << len2 << '\n'; 

if(s1.length() > 0)
  while(it1 != s1.end() )
  {
    val = static_cast<int>(*it1);
    if(val > 122 || val < 65 || ( val > 90  && val < 97  )  ) {
      sum2 = 0;
      break;
    }
    else {
      if( val > 90)
      sum1 += val - 32;
      else
      sum1 += val;
    }
    ++it1;
  }
 
if(s2.length() > 0)
  while(it2 != s2.end() )
  {
    val = static_cast<int>(*it2);
    if(val > 122 || val < 65 || ( val > 90  && val < 97  )  ) {
      sum2 = 0;
      break;
    }
    else {
      if( val > 90)
      sum2 += val - 32;
      else
      sum2 += val;
    }
    ++it2;
  }
  
  std::cout << "sum1: " << sum1 << "  sum2: " << sum2 << '\n'; 
  if(sum1 == sum2)
    return true;
  else
    return false;
}

int main(int argc, char* argv[]){


std::cout << compare("", "zz1") << '\n';


  return 0;


}

