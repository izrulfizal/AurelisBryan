#include <iostream>
using namespace std;

class Shape {
   public:
        int numSides;

};

class TwoDShape : private Shape {
    public:
        int x;
        int r;
};



int main()
{
    // cube.numSides = 6;
    return 0;
}