#include <vector>
#include <iostream>
#include <algorithm>

int main()
{
  std::vector<int> vect = {0,1,2,3,4};
  
  std::vector<int>::iterator iter_end = std::remove(vect.begin(), vect.end(), 2);
  
  std::for_each(vect.begin(),
                iter_end,
                [](int val)
                {
                   std::cout << val << " "; 
                });
}
