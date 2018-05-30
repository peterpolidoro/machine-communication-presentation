#include "MouseSoundTransmitter.h"


MouseSoundTransmitter mouse_sound_transmitter;

void setup()
{
  mouse_sound_transmitter.setup();
}

void loop()
{
  mouse_sound_transmitter.checkForRigCommands();

  mouse_sound_transmitter.checkForResearcherCommands();
}
