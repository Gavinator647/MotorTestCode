#include "MotorTestHigh.h"

MotorTestHigh::MotorTestHigh() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
}

// Called just before this Command runs the first time
void MotorTestHigh::Initialize() {
	Robot::motor.start_motor(HIGH_SPEED);
}

// Called repeatedly when this Command is scheduled to run
void MotorTestHigh::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool MotorTestHigh::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void MotorTestHigh::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MotorTestHigh::Interrupted() {

}
