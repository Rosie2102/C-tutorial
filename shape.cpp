#include<iostream>
using namespace std;

class Shape{
    public:
        void set_width_height(int width, int height){
            w = width;
            h = height;
        }
    protected:
        int w, h;
};
class Triangle : public Shape{
    public:
        int area(){
            int Tri_area=(w*h)/2;
            return Tri_area;  
        }
};
class Rectangle : public Shape{
    public:
        int area(){
            int area=w*h;
            return area;
        }
        
};

int main(){
    Rectangle rectangle;
    Triangle triangle;
    rectangle.set_width_height(10,8);
    triangle.set_width_height(2,4);
    cout<<rectangle.area() <<endl;
    cout<<triangle.area()<<endl;
    return 0;
}