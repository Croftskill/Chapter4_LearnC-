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

std::string heavyMetalUmlauts(std::string boringText){

  std::string::iterator it = boringText.begin();
  std::string MyText;

  for(; it!=boringText.end(); ++it){
    switch(*it){
      case 'A': MyText.append( "\u00c4" ); break; 
      case 'a': MyText.append( "\u00e4" ); break; 
      case 'O': MyText.append( "\u00d6" ); break; 
      case 'o': MyText.append( "\u00f6" ); break; 
      case 'E': MyText.append( "\u00cb" ); break; 
      case 'e': MyText.append( "\u00eb" ); break; 
      case 'U': MyText.append( "\u00dc" ); break; 
      case 'u': MyText.append( "\u00fc" ); break; 
      case 'I': MyText.append( "\u00cf" ); break; 
      case 'i': MyText.append( "\u00ef" ); break; 
      case 'Y': MyText.append( "\u0178" ); break; 
      case 'y': MyText.append( "\u00ff" ); break; 
      default: MyText.append(1, *it);  break;
    }
  }

  return MyText;
}



int main()
{

  std::cout << heavyMetalUmlauts("Announcing the Macbook Air Guitar") << '\n';

  return 0;
}

