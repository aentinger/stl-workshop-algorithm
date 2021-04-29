#include <array>
#include <iostream>
#include <algorithm>

int main()
{
  std::array<int, 10> arr;
  
  std::generate(arr.begin(),
                arr.end  (),
                []() -> int
                {
                  static int i = 0;
                  return i++;
                });

  std::for_each(arr.cbegin(),
                arr.cend(),
                [](int const val)
                {
                   std::cout << val << " "; 
                });
}
