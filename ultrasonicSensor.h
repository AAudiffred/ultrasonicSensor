#ifndef __ULTRASONICSENSOR_H__
#define __ULTRASONICSENSOR_H__
#include <Arduino.h>
#include <PWM.h>
#include <FunctionalInterrupt.h>

class ULTRASONIC
{
    public:
        ULTRASONIC();
        ~ULTRASONIC();
        void setup(uint8_t trigger, uint8_t echo, uint8_t ch);
        void IRAM_ATTR handle();
        float getDistance();
        uint8_t _echo;
        bool interruption;
        float d;

    private:
        PWM pwm;
        ulong _time0;
        ulong _time1;
        bool initial_state;
        bool final_state;
    
    protected:
        uint16_t _ds_micros;
};

#endif // __ULTRASONICSENSOR_H__
