//documentation for the duty cycle encoder on the DIO
// https://docs.wpilib.org/en/stable/docs/software/hardware-apis/sensors/encoders-software.html
#pragma once

#include "Config.h"
#include "DIO.h"
#include "Xbox.h"
#include <rev/SparkMax.h>
#include <rev/SparkFlex.h>
#include <frc/DutyCycleEncoder.h>
#include <frc/DigitalInput.h>

class RevHardware {
   public:
   
    RevHardware(Xbox* xbox){m_xbox = xbox;}
    void init();
    double getVortexTemperature(){return m_drive_vortex.GetMotorTemperature();}
    void runVortexWithRT();
    void runDriveAtSpeed(double speed);
    void runTurnWithLeftY();
    //void runDriveWithSICK(double speed);

   protected:
   private:

    Xbox* m_xbox;
    Dio m_dio;
 
    rev::spark::SparkFlex m_drive_vortex{DRIVE_VORTEX_ID, rev::spark::SparkFlex::MotorType::kBrushless}; 
    rev::spark::SparkFlex m_turn_vortex{TURN_VORTEX_ID, rev::spark::SparkFlex::MotorType::kBrushless};
      
};