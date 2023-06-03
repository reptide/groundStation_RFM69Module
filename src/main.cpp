#include "config.h"
#include "util.h"

Transceiver *transceiver;

enum state
{
    PRELAUNCH,
    LAUNCH_READY,
    MOTOR_BURN,
    BURNOUT,
    APOGEE,
    POST_DROGUE,
    POST_MAIN,
    END
};

void setup()
{
    // Initialize communication
    Wire.begin();
    Serial.begin(115200);

    // Wait until serial console is open, remove if not tethered to computer
    while (!Serial)
    {
        delay(1);
    }

    // gps = new GPS(1000);
    transceiver = new Transceiver(RFM69_CS, RFM69_INT);

    // check_sensors(gps, transceiver)
        // ? Serial.println("sensors success")
        // : Serial.println("sensors failed");

    // gps->enable();
    transceiver->enable();
}

void loop()
{
    scheduler.execute();
}