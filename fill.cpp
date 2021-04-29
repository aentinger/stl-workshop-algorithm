#include <array>
#include <iostream>
#include <algorithm>

int main()
{
  std::array<int, 10> arr;
  
  std::fill(arr.begin(), arr.end(), 5);

  std::for_each(arr.cbegin(),
                arr.cend(),
                [](int const val)
                {
                   std::cout << val << " "; 
                });
}
