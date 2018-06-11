---
layout: presentation
---

```json
playTone ??
```

```json
{
  "id": "playTone",
  "result": {
    "name": "playTone",
    "firmware": "SoundTransmitter",
    "parameters": [
      {
        "name": "frequency",
        "type": "long",
        "min": 0,
        "max": 22000,
        "units": "Hz"
      },
      {
        "name": "volume",
        "type": "long",
        "min": 0,
        "max": 100,
        "units": "%"
      }
    ]
  }
}
```

```json
playTone 5000 50
```

[![](assets/img/white.png)](trigger-tone)
