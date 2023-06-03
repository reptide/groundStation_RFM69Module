#ifndef CONFIG_H
#define CONFIG_H

#include <Arduino.h>
#include <Wire.h>
#include <rfm69.h>
#include <imu.h>
#include <gps.h>
#include <serialSim.h>
#include <TaskScheduler.h>

#define RFM69_INT PC6  
#define RFM69_CS PB9  
#define RFM69_RST PB8
#define RFM69_IRQ 5

#endif