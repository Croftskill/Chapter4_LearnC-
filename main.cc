#include <iostream>
#include <cstdlib>
#include <array>
#include <ctime>
#include <vector>
#include <string>
#include <cassert>
#include <deque>
#include <map>
#include <algorithm>
#include <list>

int main()
{
std::array<int, 5> my_array;

std::vector<int> my_vector;

std::deque<int> my_deque;

std::map<int, std::string> my_map;

std::list<int> my_list;

for(int i = 0; i < 5; ++i)
{
my_list.push_back(i);
my_vector.push_back(i);
}

std::list<int>::const_iterator it;

it = min_element(my_list.begin(),my_list.end());
std::cout << "Smallest element in list: "<< *it <<'\n';
it = max_element(my_list.begin(), my_list.end());
std::cout << "Biggest element in list: " << *it << '\n';

it = find(my_list.begin(), my_list.end(), 3);
my_list.insert(it, 66);

for(it = my_list.begin(); it != my_list.end(); it++)
std::cout << *it << " ";
std::cout << std::endl;
reverse(my_vector.begin(), my_vector.end());

for(int i = 0; i < my_vector.size(); i++)
std::cout << my_vector[i] << " ";
std::cout << std::endl;
/*
my_map.insert(std::make_pair(1, "apple"));
my_map.insert(std::make_pair(5, "kokosza"));
my_map.insert(std::make_pair(2, "banan"));

std::map<int, std::string>::const_iterator it;

it = my_map.begin();


while(it != my_map.end())
{
std::cout << it->first << "=" << it-> second <<" ";
it++;
}

std::cout << std::endl;
*/


return 0;
}
