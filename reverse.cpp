#include <array>
#include <iostream>
#include <algorithm>

int main()
{
  std::array<int, 5> arr = {0,1,2,3,4};
  
  std::reverse(arr.begin(), arr.end());


  std::for_each(arr.cbegin(),
                arr.cend(),
                [](int const val)
                {
                   std::cout << val << " "; 
                });
  
}
