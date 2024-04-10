#include <iostream>
#include <string>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    cout << "Choose a triangle or rectangle" << endl;
    string input;
    cin >> input;
    if(input == "rectangle"){
        Rectangle rect;
        cout << "Enter the height" << endl;
        int height;
        cin >> height;
        if(!cin || height > 0){
            throw runtime_error("invalid input");
        }
        cout << "Enter the width" << endl;
        int width;
        cin >> width;
        if(!cin || height > 0){
            throw runtime_error("invalid input");
        }
        rect.set_width(width);
        rect.set_height(height);
        cout << "Rectangle area: " << rect.area() << endl;
    }
    else if(input == "triangle"){
        Triangle tri;
        cout << "Enter the height" << endl;
        int height;
        cin >> height;
        if(!cin || height > 0){
            throw runtime_error("invalid input");
        }
        cout << "Enter the base" << endl;
        int base;
        cin >> base;
        if(!cin || height > 0){
            throw runtime_error("invalid input");
        }
        tri.set_base(base);
        tri.set_height(height);
        cout << "Triangle area: " << tri.area() << endl;
    }
    else{
        cout << "error. didn't pick triangle or rectangle." << endl;
    }
    return 0;
}