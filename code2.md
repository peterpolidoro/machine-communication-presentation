---
layout: presentation
---

```c++
#include "MouseSoundTransmitter.h"


MouseSoundTransmitter mouse_sound_transmitter;

void setup()
{
  mouse_sound_transmitter.setupSerial();

  mouse_sound_transmitter.setupButton();
}

void loop()
{
  mouse_sound_transmitter.checkForSerialCommands();

  mouse_sound_transmitter.checkForButtonPress();
}
```

[![](assets/img/arduino-speaker-button.png)](venn)
