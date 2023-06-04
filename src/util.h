#ifndef UTIL_H
#define UTIL_H

#include "config.h"

bool check_sensors(Transceiver *transceiver)
{
    Serial.println("Check Sensors Called");

    Serial.println("************************************");
    Serial.println("Conducting status check on RFM 69...");
    Serial.println("************************************");

    bool error = true;

    Serial.print("Checking RFM69 status... ");
    Serial.println(transceiver->checkStatus());

    // Check status of RFM69
    if (transceiver->checkStatus())
    {
        Serial.println("Transceiver connection success! \xE2\x9C\x93");
    }
    else
    {
        Serial.println("Transceiver connection failed \xE2\x9C\x97");
        error = false;
    }

    return error;
}

#endif