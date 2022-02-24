#include <Arduino.h>

// #include <ESP8266WiFi.h>

#define BAUDRATE 115200

#define WIFI_SSID "MEO-8BF0E0"
#define WIFI_PASSWORD "1ad75b8b11"

// #define API_KEY "API_KEY"
#define DATABASE_URL "krfld-projects-default-rtdb.europe-west1.firebasedatabase.app"
#define DATABASE_SECRET "gKMRB9kHbXm7Rdq3YjYkVTMtgbx5kmSaTdyGGuhx"

#define VIBRATOR_PIN 2

typedef struct
{
	bool state;
	bool active;
	float time;
	int repeat;
} Alarm;

/*{
'state': false, // bool
'active': true, // bool
'time': h.m, // float
'repeat': 'daily', // once - 0 | daily - 1 | onlyWeek - 2 | onlyWeekend - 3
}*/

void connectWiFi();
void connectFirebase();
void sync();
void play();