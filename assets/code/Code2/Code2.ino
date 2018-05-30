const int speaker_pin = 3;
const long baudrate = 115200;

const int tone_frequency = 5000;
const int tone_duration = 75;

String serial_port_string;

const String play_tone_command = "playTone";

void playTone()
{
  tone(speaker_pin, tone_frequency, tone_duration);
}

void setup()
{
  Serial.begin(baudrate);
}

void loop()
{
  while(Serial.available())
  {
    serial_port_string = Serial.readString();
    serial_port_string.trim();
    if (serial_port_string == play_tone_command)
    {
      playTone();
    }
  }
}
