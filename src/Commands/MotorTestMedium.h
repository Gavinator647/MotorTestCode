#ifndef MotorTestMedium_H
#define MotorTestMedium_H

#include "Subsystems/Motor.h"
#include <Commands/Command.h>
#include "Robot.h"

class MotorTestMedium : public frc::Command {
private:
	static constexpr float MEDIUM_SPEED = 65.0;

public:
	MotorTestMedium();
	void Initialize() override;
	void Execute() override;
	bool IsFinished() override;
	void End() override;
	void Interrupted() override;
};

#endif  // MotorTestMedium_H
