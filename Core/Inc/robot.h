/*
 * robot.h
 *
 *  Created on: May 7, 2021
 *      Author: shado
 */

#ifndef SRC_ROBOT_H_
#define SRC_ROBOT_H_
/*struct params {
	double Ki_l;
	double kp_l;
	double kd_l;
	//coeficient de
	double Ki_r;
	double kp_r;
	double kd_r;
};*/
class robot {
public:
	robot();
	virtual ~robot();
private:
	void getSave(); //récupérer les données de l'EPROM
	//pi letfPi;
	//pi RightPi;
};

#endif /* SRC_ROBOT_H_ */
