#include <iostream>
#include <string>

using namespace std;

class Car{
    public:
        string model;
        string brand;
        string color;

        Car(string model, string brand, string color){
            this->model = model;
            this->brand = brand;
            this->color = color;
        }

        void displayDetail(){
            cout << "Model: " << model << endl;
            cout << "Brand: " << brand << endl;
            cout << "Color: " << color << endl;
        }
};

int main(){

    Car car1("City", "Honda", "Grey");
    Car car2("Civic", "Honda", "Black");
    Car car3("Elantra", "Hyundai", "White");

    car2.displayDetail();

}