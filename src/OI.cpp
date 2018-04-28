/*----------------------------------------------------------------------------*/
/* Copyright (c) 2017-2018 FIRST. All Rights Reserved.                        */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "OI.h"

#include <WPILib.h>

OI::OI() {
	a.WhenPressed(new MotorTestLow());
	a.WhenReleased(new KillMotor());
	b.WhenPressed(new MotorTestMedium());
	b.WhenReleased(new KillMotor());
	x.WhenPressed(new MotorTestMedium());
	x.WhenReleased(new KillMotor());
}

frc::Joystick& OI::GetJoystick() {
	return m_joystick;
}
