#include "main.h"

// TODO search sleep mode

void setup()
{
	pinMode(VIBRATOR_PIN, OUTPUT);

	Serial.begin(BAUDRATE);

	Serial.print("Connecting...");
	WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
	while (WiFi.status() != WL_CONNECTED)
	{
		Serial.print(".");
		delay(500);
	}
	Serial.println();

	Serial.print("WiFi connected to ");
	Serial.println(WiFi.localIP());

	// Firebase.begin(DATABASE_URL, DATABASE_SECRET);
}

Alarm alarm;

void loop()
{
	// Serial.println("Running...");
	// delay(1000);

	if (alarm.state)
		play();
	// Check alarm off on cloud
	// Check repeat
	else
	{
		sync();
		// Check alarm on locally (if not ignore and repeat)
		// if (alarm.state) set true on cloud
	}
}

void play()
{
	Serial.println("On");
	digitalWrite(VIBRATOR_PIN, HIGH);
	delay(1000);

	Serial.println("Off");
	digitalWrite(VIBRATOR_PIN, LOW);
	delay(1000);
}

void sync()
{
	// Sync every 3 hours
}