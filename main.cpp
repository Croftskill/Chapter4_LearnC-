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
#include <cmath>

using namespace std;

vector<int> solution(int N, vector<int> &P, vector<int> &Q) {

  int x = 0;
  const int range_val = static_cast<int> (sqrt(N))+1;
  vector<bool> prime( N+1, true );
  vector<bool> semi_prime( N+1, false );
  vector<int> semiprime_counter( static_cast<int>( P.size() ) );
  vector<bool>::iterator it = prime.begin();
  
  prime[0] = false;  
  prime[1] = false;
  
  for(int i = 2; i < range_val; i++){
    if( prime[i] )
      for (int j=i*i; j <= N; ++x, j=i*i + x*i ){
        prime[j] = false;
      }
    x = 0;
  }


  for(int i = 2; i < range_val; ++i){
    if(!prime[i])
      continue;
    else  
      for(int j = i; j * i <= N; ++j)
        if(!prime[j])
          continue;
        else
          semi_prime[i*j] = true;
  }
  
  /*
  std::cout << "prime \n";
  for(int i =0 ; i <= N; ++i)
    std::cout <<  prime[i] << " ";
    std::cout << " \nsemi prime \n";
  for(int i =0 ; i <= N; ++i)
    std::cout << semi_prime[i] << " ";
  */
  
  for(int i = 0; i < static_cast<int>(P.size()); ++i)
    semiprime_counter[i] = count(semi_prime.begin() + P[i] , semi_prime.begin() + Q[i] +1, true); 
  
  return semiprime_counter;
}

int main(){

  vector<int> P {1, 5, 2};
  vector<int> Q {26, 10, 5};

  vector<int> Z = solution(26, P, Q);

  for( auto it : Z)  
    std::cout << it << " ";
  std::cout << "\n";


  return 0;
}
/* Algorithm

1. Find min(P) and max(Q)
2. Calculate all semiprimes between those numbers ~ How?
   2.1 Known factors
   ~   All primes as a result is not multiplicable by any number other than themselves and 1 - Not rootable
   ~   Semiprimes as a result can be multipllication only by prime numbers
   ~   Semiprimes are NOT primes
   ~   xAll multiplications of primes are semiprimes
   2.2 Possible methods
   ~   Loop through numbers, and if not prime, check if it is multiplicable by NOT prime from the beginning - If is, it is not semiprime
   ~   xCalculate all primes
   ~   xMultiply all primes with themlselves and iterate up to sqrt(n)
   
3. Go through all comparisons between arrays and count number of semipremises from table.

   Methods usage
   
1. Set up a vector of bools for prime numbers. array<bool, sqrt(N)> 
2. Set up a vector of bools for semiprimes array<bool, sqrt(N)> 
3. Set up a vector<M> for return container
4. Calculate primes with true
5. Calculate semiprimes as in 2.2 (~3) with true
6. Iterate through all P[i] and Q[i] and count true between numbers.
7. Push counter value into return vector

*/
