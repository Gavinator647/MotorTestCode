#ifndef MotorTestHigh_H
#define MotorTestHigh_H

#include "Subsystems/Motor.h"
#include <Commands/Command.h>
#include "Robot.h"

class MotorTestHigh : public frc::Command {
private:
	static constexpr float HIGH_SPEED = 90.0;

public:
	MotorTestHigh();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // MotorTestHigh_H
