#pragma once
#include <cmath>
#include <algorithm>


//kP, kI, kD, limit, windup
struct pidGains{
    double kP;
    double kI;
    double kD;
    double limit;
    double windup;

    public:
    pidGains()
        : pidGains(0, 0, 0, 0, 0){}
    pidGains(double ikP, double ikD)
        : kP(ikP)
        , kI(0)
        , kD(ikD){}
    
    //kp, kp, kd, limit, windup
    pidGains(double ikP, double ikI, double ikD, double ilimit, double iwindup)
        : kP(ikP)
        , kI(ikI)
        , kD(ikD)
        , limit(ilimit)
        , windup(iwindup){}
};


class PID {
    double error = 0, lastError = 0, derivative = 0, integral = 0;
    double output;
    pidGains gains;

    public:
    PID();
    PID(pidGains igains);
    double calculate (double input);
    void setGains(pidGains igains);
    double getOutput();
    double getError();
    double getIntegral();
    
};

