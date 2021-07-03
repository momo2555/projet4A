/*
 * pi.h
 *
 *  Created on: Apr 4, 2021
 *      Author: shado
 */

#ifndef INC_PI_H_
#define INC_PI_H_


class pi {
public:
	pi(int dt, int Kp, int Ki, int Kd);
	float correction(float error);
	void reset(float intinit);
	void setPID(int Kp, int Ki, int Kd);
	void setTime(int dt);
private:
	float Kp, Ki, Kd; //constat values
	float lastErr; //the last errror(for derivation)
	float integ; //integrale value
	float dt;
};


#endif /* INC_PI_H_ */
