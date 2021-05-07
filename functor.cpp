#include <iostream>
#include <array>
#include <algorithm>

class FunctorAdd
{
private:
  int _val;
public:
  FunctorAdd(int const v) : _val{v} { }
  int operator () (int const other_val)
  {
    return (_val + other_val);
  }
};

int main()
{
  std::array<int, 5> arr = {0,1,2,3,4};

  std::transform(arr.begin(), arr.end(), arr.begin(), FunctorAdd(5));
                 

  std::for_each(arr.cbegin(),
                arr.cend(),
                [](int const val)
                {
                   std::cout << val << " "; 
                });
}
