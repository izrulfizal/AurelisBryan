#include <iostream>
using namespace std;

class Shape {
   public:
        int numSides;

};

class TwoDShape : private Shape {
    public:
        int x;
        int y;
};

class ThreeDShape : public Shape {
    public:
        int x;
        int y;
        int z;
};

int main()
{
    ThreeDShape cube;
    cube.numSides = 6;
    return 0;
}