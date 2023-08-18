//-Create class Point, with the following members : x, y(integers value)
//	- It will contains(int x, int y) = > attributes
//	- Constructors
//	- Setters and getters
//	- Create class Circle that consist of following attributes and methods :
//	-Center(point)
//	- Radius(double)
//	// methods
//	- Constructors
//	- Setters and getters
//	- calcArea() = > method calc area of circle and return it
//In main :
//● Define 2 variables named circle1, circle2 of type Circle then copy contents of circle1 to circle2 and print its area .

#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(){
		x = 0;
	    y= 0;
	}
	Point(int px,int py) {
		x = px;
		y = py;
	}
	void set_point(int px, int py) {
		x = px;
		y = py;
	}
	int get_x() {
		return x;
	}
	int get_y() {
		return y;
	}
};
class Circle {
private:
	Point Center;
	double Radius;
public:
	Circle() {
		Center.set_point(0, 0);
		Radius = 0;
	}
	Circle(Point p,double r) {
		Center=p;
		Radius = r;
	}
	void set_center(Point p) {
		Center = p;
	}
	void set_rad(double r) {
		Radius = r;
	}
	Point get_center() {
		return Center;
	}
	double get_rad() {
		return Radius;
	}
	double calcArea() {
		const double pi = 3.14;
		return pi * pow(Radius, 2);
	}
};

int main() {
	Circle c1;
	c1.set_rad(5);
	cout<<c1.calcArea()<< endl;

	Circle c2;
	c2.set_rad(2);
	cout << c2.calcArea()<<endl;
	Point p(1, 2);
	Circle c3(p,2);
	cout << c3.calcArea();
}

