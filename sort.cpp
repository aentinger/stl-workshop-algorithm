#include <array>
#include <iostream>
#include <algorithm>

int main()
{
  std::array<int, 5> arr = {3,5,1,4,2};
  
  std::sort(arr.begin(), arr.end());

  std::for_each(arr.cbegin(),
                arr.cend(),
                [](int const val)
                {
                   std::cout << val << " "; 
                });


  class Point3D
  {
    public:
      int x, y, z;
  };
  
  Point3D p1{0,0,0}, p2{1,1,1}, p3{2,3,2};
  std::array<Point3D, 3> point_arr = {p3, p2, p1};
  std::sort(point_arr.begin(),
            point_arr.end  (),
            [](Point3D i, Point3D j)
            {
               return  (i.x < j.x) && (i.y < j.y) && (i.z < j.z);
            });

  std::cout << std::endl;

  std::for_each(point_arr.cbegin(),
                point_arr.cend(),
                [](Point3D const p)
                {
                   std::cout << "(" << p.x << ", " << p.y << ", " << p.z << ") "; 
                });
}
