




#include <cmath>
#include <iostream>



double gyroInput = 123;

double constrainAngle(double inputDegree){
    return atan2(sin(inputDegree), cos(inputDegree));
}


void gyroTurnKpKd(double targetAngle){
    double kp = 0.1;
    double kd = 0.1;
    double lastError = 0;
    while (true)
    {
        double error = targetAngle - constrainAngle(gyroInput);
        error = constrainAngle(error);
        double derivative = error - lastError;
        std::cout << error * kp + derivative * kd << std::endl;
        lastError = error;
        pros::delay(10);
    }
}


void gyroTurnPID(double targetAngle){
    double kp = 0.1;
    double kd = 0.1;
    double ki = 0.1;
    double integral = 0;
    double integeralthreshold = 3;
    double integralLimit = 100;
    double lastError = 0;
    while (true)
    {
        double error = targetAngle - constrainAngle(gyroInput);
        error = constrainAngle(error);
        double derivative = error - lastError;
        if (std::abs(error) < integeralthreshold)
        {
            integral += error;
        }
        else
        {
            integral = 0;
        }
        if (abs(integral) > integralLimit)
        {
            integral = integralLimit * signbit(integral);
        }
        std::cout << error * kp + derivative * kd + integral * ki << std::endl;
        lastError = error;
        pros::delay(10);
    }
}


int main() {

    return 0;
}