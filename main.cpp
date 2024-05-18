
#include <iostream>
using namespace std;

class Box
{
private:
  double length;
  double breadth;
  double height;

public:
  void SetLength(double l)
  {
    length = l;
  }
  void SetBreadith(double b)
  {
    breadth = b;
  }
  void SetHeight(double h)
  {
    height = h;
  }
  double GetVolume()
  {
    return length * breadth * height;
  }
  Box operator+(const Box &b)
  {
    Box box;
    box.length = this->length + b.length;
    box.breadth = this->breadth + b.breadth;
    box.height = this->height + b.height;
    return box;
  }
};

int main()
{
  Box Box1;
  Box Box2;
  Box Box3;
  double volume = 0.0;
  // Box1 specification
  Box1.SetLength(6.0);
  Box1.SetBreadith(7.0);
  Box1.SetHeight(5.0);
  // Box2 specification
  Box2.SetLength(12.0);
  Box2.SetBreadith(13.0);
  Box2.SetHeight(10.0);
  // volume of Box1
  volume = Box1.GetVolume();
  cout << "volume of box1 : " << volume << endl;

  // volume of box2
  volume = Box2.GetVolume();
  cout << "volume of box2 : " << volume << endl;
  Box3 = Box1 + Box2;
  volume = Box3.GetVolume();
  cout << "volume of Box3 : " << volume << endl;
  return 0;
}
