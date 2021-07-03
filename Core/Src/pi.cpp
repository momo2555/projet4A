/*
 * pi.cpp
 *
 *  Created on: Apr 4, 2021
 *      Author: shado
 */
#include "pi.h"

pi::pi(int dt, int Kp, int Ki, int Kd) { //constructor
	this->setPID(Kp, Ki, Kd);
	this->setTime(dt);

	this->reset(0);
}
void pi::reset(float intinit) {
	this->integ = intinit; //set the integrale to 0
}

void pi::setPID(int Kp, int Ki, int Kd) {
	this->Kp = Kp;
	this->Kd = Kd;
	this->Ki = Ki;
}
void pi::setTime(int dt) {
	this->dt = dt;
}
float pi::correction(float error) {
	float exit;
	this->integ = this->integ + this->lastErr * this->dt;
	float deriv = (error - this->lastErr)/this->dt;
	exit = this->Kp*error + this->Ki*this->integ + this->Kd*deriv;
	return exit;

}
