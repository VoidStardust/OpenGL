//
// Created by Alex_Li on 2018/11/27.
//

#include "point.h"
#include "vector.h"

Point::Point(long double x, long double y, long double z) : x(x), y(y), z(z) {}

long double Point::getX() const
{
	return x;
}

void Point::setX(long double x)
{
	Point::x = x;
}

long double Point::getY() const
{
	return y;
}

void Point::setY(long double y)
{
	Point::y = y;
}

long double Point::getZ() const
{
	return z;
}

void Point::setZ(long double z)
{
	Point::z = z;
}

void Point::setPoint(long double x, long double y, long double z)
{
	Point::x = x;
	Point::y = y;
	Point::z = z;
}

void Point::movePoint(long double x, long double y, long double z)
{
	Point::x += x;
	Point::y += y;
	Point::z += z;
}

void Point::movePoint(const Vector &vector)
{
	movePoint(vector.x, vector.y, vector.z);
}
