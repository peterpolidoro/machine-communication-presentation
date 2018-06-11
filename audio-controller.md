---
layout: presentation
---

# [](#header-1) JSON-RPC 2.0

```json
--> ?
<--
{
  "id": "?",
  "result": {
    "device_id": {
      "name": "audio_controller",
      "form_factor": "3x2",
      "serial_number": 0
    },
    "api": {
      "firmware": [
        "AudioController"
      ],
      "verbosity": "NAMES",
      "functions": [
        "playTone",
        "playNoise",
        "stop",
        "isPlaying"
      ],
      "parameters": [
        "frequency",
        "speaker",
        "volume"
      ],
      "properties": [
        "triggerToneFrequency",
        "triggerToneVolume",
        "triggerToneDuration"
      ]
      "callbacks": [
        "triggerTone",
      ]
    }
  }
}
```

[![](assets/img/white.png)](audio-controller)
