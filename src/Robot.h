#pragma once


#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>
#include <IterativeRobot.h>


#include "OI.h"


#include "Subsystems/Motor.h"

class OI;

class Robot: public IterativeRobot {
public:

	static OI oi;
	static Motor motor;


private:
	frc::Command* m_autonomousCommand = nullptr;

	void RobotInit() override;
	void AutonomousInit() override;
	void AutonomousPeriodic() override;
	void TeleopInit() override;
	void TeleopPeriodic() override;
	void TestPeriodic() override;
	void DisabledPeriodic() override;

	void Log();
};

