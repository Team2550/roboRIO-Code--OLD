#include "2015Code.hh"

Robot::Robot() : driver(1) {
	//lw = LiveWindow::GetInstance();
}

Robot::~Robot() {
}

void Robot::RobotInit() {
}

void Robot::AutonomousInit() {

}

void Robot::AutonomousPeriodic() {

}

void Robot::TeleopInit() {

}

void Robot::TeleopPeriodic() {
	drive.remoteDrive(driver.GetRawAxis(xbox::axis::leftY),
					  driver.GetRawAxis(xbox::axis::rightY),
					  driver.GetRawButton(xbox::btn::rb));
}

void Robot::TestPeriodic() {
	//lw->Run();
}

START_ROBOT_CLASS(Robot);
