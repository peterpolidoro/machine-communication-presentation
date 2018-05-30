const int speaker_pin = 3;

const int tone_frequency = 500;
const int tone_half_period_ms = 1000/(2*tone_frequency);

void togglePin()
{
  int current_state = digitalRead(speaker_pin);
  digitalWrite(speaker_pin, !current_state);
}

void setup()
{
  pinMode(speaker_pin, OUTPUT);
}

void loop()
{
  togglePin();
  delay(tone_half_period_ms);
}
