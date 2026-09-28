#include "RevHardware.h"


#include <iostream>
using namespace std;
//--------------------------------------------------------------------------------
//
void RevHardware::init(){}

//--------------------------------------------------------------------------------
//
void RevHardware::runVortexWithRT(){
    double rt_value = m_xbox->getRightTriggerValue();
    m_drive_vortex.Set(rt_value/10);
}

//--------------------------------------------------------------------------------
//
void RevHardware::runDriveAtSpeed(double speed){
    m_drive_vortex.Set(speed);
}

void RevHardware::runTurnWithLeftY(){
    double speed = m_xbox->getLeftStickYValue();
    m_turn_vortex.Set(speed/10);
}

// void RevHardware::runDriveWithSICK(double speed){
//     if(m_dio.getSICKSensorValue()){
//         m_drive_vortex.Set(speed);
//     } else {
//         m_drive_vortex.Set(0);
//     }
// }