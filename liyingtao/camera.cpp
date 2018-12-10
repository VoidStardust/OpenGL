//
// Created by Alex_Li on 18-12-10.
//

#include "camera.h"

void Camera::setUpLock(bool upLock)
{
	Camera::upLock = upLock;
}

void Camera::setEye(const Point &eye)
{
	Camera::eye = eye;
}

void Camera::setCenter(const Point &center)
{
	Camera::center = center;
}

void Camera::setUp(const Point &up)
{
	Camera::up = up;
}

void Camera::setCamera()
{
	glLoadIdentity();
	gluLookAt(eye.getX(), eye.getY(), eye.getZ(),
	          center.getX(), center.getY(), center.getZ(),
	          up.getX(), up.getY(), up.getZ());
}

void Camera::scale(double ratio)
{
	Vector move(eye, center);
	move = move * ratio;
	eye.movePoint(move);
}

void Camera::translate(double x_dif, double y_dif, double z_dif)
{
	Vector perspective(eye, center);
	Vector up_vector(Point(0, 0, 0), up);
	long double a = Vector::scalarProduct(perspective, up_vector) / Vector::scalarProduct(up_vector, up_vector);
	Vector move_y = perspective - (a * up_vector);

//	Vector move = c * x_dif + e * y_dif;

	eye.movePoint(move);
	center.movePoint(move);
}
