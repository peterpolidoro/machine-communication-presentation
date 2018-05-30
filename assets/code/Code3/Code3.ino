const int speaker_pin = 11;
const int button_pin = 12;
const long baudrate = 115200;

const long loops_to_wait_between_button_presses = 10000;
long loop_count;

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
  pinMode(button_pin,INPUT_PULLUP);

  loop_count = loops_to_wait_between_button_presses;
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

  if ((digitalRead(button_pin) == LOW) &&
      (loop_count > loops_to_wait_between_button_presses))
  {
    loop_count = 0;
    playTone();
  }

  ++loop_count;
}
