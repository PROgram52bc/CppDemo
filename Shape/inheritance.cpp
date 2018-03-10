// This is a practice on multi-level inheritance with shapes
// Shape 
//   ^ 
//   '`----- Rectangle <- Square
//   '
//   '`----- Triangle
//   '
//    `----- Circle
//
// Currently only Square and Rectangle has the redefined "print()" virtual method
// which visualize the shape itself
//
// For Triangle, the shape cannot be defined only by its base and height, as
// it is now, for improving, you can add another attribute called vertexDistance
// which defines the distance between one end point on base, and the projection
// of the vertex on the base
#include "Shape.h"
#include <iostream>
#include <memory>
using namespace std;

void Rectangle::print(ostream & os) const
{
	os<<endl;
	// first line
	for (int i=0; i<width; i++)
		os<<"-";
	os<<endl;
	// intermediates
	for (int i=0; i<length-2; i++)
	{
		os<<"|";
		for (int j=0; j<width-2; j++)
			os<<" ";
		os<<"|";
		os<<endl;
	}

	// last line
	for (int i=0; i<width; i++)
		os<<"-";
	os<<endl;
	//    w
	//  ------
	//  |    |l
	//  ------
	//
}


int main()
{

	vector <shared_ptr<Shape>> vShape;
	vShape.push_back(shared_ptr<Shape>(new Triangle("Triangle1",5,10)));
	vShape.push_back(shared_ptr<Shape>(new Rectangle("Rectangle1",50,50)));
	vShape.push_back(shared_ptr<Shape>(new Square("Square1",6)));
	vShape.push_back(shared_ptr<Shape>(new Circle("Circle1",4)));

	int count = 0;
	for (auto pp : vShape)
	{
		cout << "Shape " << ++count << ": " << endl;
		cout << "Name: " << pp->getName() << endl;
		cout << "Print: " << *pp << endl;
		cout << "Area: " << pp->getArea() << endl;
		cout << "Circumference: " << pp->getCirc() << endl;
		cout << endl;
	}

	return 0;
}
