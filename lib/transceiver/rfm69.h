#ifndef RFM69_H
#define RFM69_H

#define RFM69_RST PB1
#define RFM69_FREQ 915.0
#define RFM69_Adress 1

#include <scheduler.h>
#include <RH_RF69.h>
#include <SPI.h>
#include <Arduino.h>

class Transceiver : public Task
{
private:
    RH_RF69 *driver;
    uint8_t *buffer;

public:
    Transceiver(int RFM69_CS, int RFM69_INT);
    ~Transceiver();

    // Task virtual methods
    bool Callback();
    bool OnEnable();
    void OnDisable();
};

#endif