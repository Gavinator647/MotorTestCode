#include "MotorTestLow.h"

MotorTestLow::MotorTestLow() :
	frc::Command("MotorTestLow"){
	Requires(&Robot::motor);
}

// Called just before this Command runs the first time
void MotorTestLow::Initialize() {
	Robot::motor.start_motor(LOW_SPEED);
}

// Called repeatedly when this Command is scheduled to run
void MotorTestLow::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool MotorTestLow::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void MotorTestLow::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void MotorTestLow::Interrupted() {

}
