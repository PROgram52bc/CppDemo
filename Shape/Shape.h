#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Shape
{
	protected:
		string name;
		virtual void print(ostream & os) const
		{
			os << getName() << endl; 
		}
	public:
		Shape(): name("")
		{ }
		Shape(string iname): name(iname)
		{ }
		string getName() const { return name; }
		void setName(string iname) { name = iname; }
		virtual float getArea() const = 0; // pure virtual method
		virtual float getCirc() const = 0; // pure virtual method
		friend ostream & operator<<(ostream &os, const Shape &s)
		{ 
			s.print(os);
			return os;
		}
};

class Rectangle: public Shape
{
	protected:
		int length, width;
	public:
		Rectangle(): Shape(), length(0), width(0)
		{ }
		Rectangle(string iname, int il=0, int iw=0):
			Shape(iname), length(il), width(iw)
		{ }
		float getArea() const { return width * length; }
		int getWidth() const { return width; }
		int getLength() const { return length; }
		virtual void setWidth(int w) { width = w; }
		virtual void setLength(int l) { length = l; }
		void print(ostream & os) const;
		float getCirc() const { return (length + width) / 2; }
};


class Square: public Rectangle
{
	public:
		Square(): Rectangle()
		{ }
		Square(string iname, int side=0): Rectangle(iname, side, side)
		{ }
		float getArea() const { return Rectangle::getArea(); }
		void setWidth(int w) { width = length = w; }
		void setLength(int l) { length = width = l; }
		
};

class Triangle: public Shape
{
	protected:
		int base, height;
	public:
		Triangle(): Shape(), base(0), height(0)
		{ }
		Triangle(string iname, int ib=0, int ih=0):
			Shape(iname), base(ib), height(ih)
		{ }
		float getArea() const { return base * height / 2; }
		float getCirc() const { return 0; } // fixme!
};

class Circle: public Shape
{
	private:
		static const float PI;
	protected:
		int radius;
	public:
		Circle(): Shape(), radius(0)
		{ }
		Circle(string iname, int ir=0):
			Shape(iname), radius(ir)
		{ }
		float getArea() const { return radius * radius * PI; }
		float getCirc() const { return radius * 2 * PI; }
};

const float Circle::PI = 3.1415926;

#endif
