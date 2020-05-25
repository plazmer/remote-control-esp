#include <SPI.h>
#include <Wire.h>
#include <ESP8266WiFi.h>
#include <PubSubClient.h>
#include <ArduinoJson.h>
#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>
#include <IRrecv.h>
#include <IRutils.h>

void callback(char* topic, byte* payload, unsigned int length);
unsigned long getCodeFromPayload(byte* payload, unsigned int length);
unsigned long receiveCode();
void sendCode(byte* payload, unsigned int length, String encoding);
void subscribeToAllTopics();
void connectToWiFi();
void connectToMQTT();
