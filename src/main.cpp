#include "config.h"
#include "util.h"

Transceiver *transceiver;

void setup()
{
    // Initialize communication
    Serial.begin(115200);

    // Wait until serial console is open, remove if not tethered to computer
    while (!Serial)
    {
        delay(1);
    }

    if(Serial)
    {
        Serial.println("Serial Console Open.");
    }

    transceiver = new Transceiver(RFM69_CS, RFM69_INT);

    if(check_sensors(transceiver))
    {
        Serial.println("Transceiver Connected.");
    }
    else
    {
        Serial.println("Transceiver Not Connected.");
    }

    if(transceiver)
    {
        Serial.println("Transceiver Created.");
    }
    else
    {
        Serial.println("Transceiver Not Created.");
    }

    transceiver->enable();

    if(transceiver->enable())
    {
        Serial.println("Transceiver Enabled.");
    }
    else
    {
        Serial.println("Transceiver Not Enabled.");
    }

}

void loop()
{
    scheduler.execute();
}