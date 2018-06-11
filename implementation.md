---
layout: presentation
---

```c++
#include <SoundTransmitter.h>


SoundTransmitter dev;

void setup()
{
  dev.setup();
  dev.startServer();
}

void loop()
{
  dev.update();
}

```

[![](assets/img/white.png)](play-tone)
