#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <iterator>
#include <ctype.h>

class TwoToOne{

public:
  static std::string longest(const std::string &s1, const std::string &s2);

};

std::string TwoToOne::longest(const std::string &s1, const std::string &s2){
  std::string strx;
  
  std::sort( str1.begin(), str1.end() );
  std::sort( str2.begin(), str2.end() );

  for( int i = 97; i < 123; ++i){

    if(s1.find(i) !=  std::string::npos){
      strx.append(1,i);
      continue;
    }

    if(s2.find(i) !=  std::string::npos)
      strx.append(1,i);
  }

}

int main(){

  std::cout << TwoToOne::longest("abcdefghilnoprstu", "koko") << '\n';

  return 0;
}
