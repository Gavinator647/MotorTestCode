#ifndef MotorTestLow_H
#define MotorTestLow_H

#include <Commands/Command.h>
#include "Subsystems/Motor.h"
#include "Robot.h"

class MotorTestLow : public frc::Command {
private:
	static constexpr float LOW_SPEED = 25.0;


public:
	MotorTestLow();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // MotorTestLow_H
