#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <Wire.h>
#include "rfm69.h"
// #include <gps.h>
#include "TaskScheduler.h"

#define RFM69_INT PD2  
#define RFM69_CS PB2 
#define RFM69_RST PB1
#define RFM69_IRQ 0

#endif