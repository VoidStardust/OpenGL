//
// Created by Alex_Li on 2018/11/27.
//

#ifndef OPENGL_POINT_H
#define OPENGL_POINT_H

class Vector;

class Point
{
private:
	long double x = 0;
	long double y = 0;
	long double z = 0;

public:
	long double getX() const;
	void setX(long double x);
	long double getY() const;
	void setY(long double y);
	long double getZ() const;
	void setZ(long double z);

public:
	Point() = default;
	Point(long double x, long double y, long double z);
	void setPoint(long double x, long double y, long double z);
	void movePoint(long double x, long double y, long double z);
	void movePoint(const Vector &vector);
};


#endif //OPENGL_POINT_H
