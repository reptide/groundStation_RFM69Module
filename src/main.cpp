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

    transceiver = new Transceiver(RFM69_CS, RFM69_INT);
    transceiver->enable();
}

void loop()
{
    scheduler.execute();
}