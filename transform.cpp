#include <cmath>

#include <array>
#include <iostream>
#include <algorithm>

int main()
{
  std::array<int, 5> arr = {0,1,2,3,4};
  
  std::transform(arr.begin(),
                 arr.end(),
                 arr.begin(),
                 [](int const val) -> int
                 {
                    return pow(2, val); 
                 });


  std::for_each(arr.cbegin(),
                arr.cend(),
                [](int const val)
                {
                   std::cout << val << " "; 
                });
  
}
