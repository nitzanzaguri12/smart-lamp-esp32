# Smart Lamp (ESP32)

A smart lamp that reacts to its environment: it measures ambient light, detects motion, and adjusts brightness and color accordingly — warm ambient light, a dim night mode, or colors.

The lamp connects to Wi-Fi and sends data to a Python server, which stores it in PostgreSQL. It can be controlled from a phone.

> 🚧 Work in progress — see roadmap below.

## Why I built this
To build a complete system end to end, from hardware to backend, and find out which side I enjoy more: embedded or backend development.

## Tech stack
- **Hardware:** ESP32, SK6812 RGBW LED strip, LDR light sensor, HC-SR501 PIR motion sensor
- **Firmware:** C++ (Arduino framework)
- **Backend:** Python, PostgreSQL
- **Control:** Web interface (mobile)

## Project structure
```
firmware/   ESP32 code
server/     Python backend
docs/       Wiring diagrams, images, notes
```

## Roadmap
- [x] Development environment setup
- [ ] First LED blink
- [ ] Light and motion sensors
- [ ] LED strip and lighting modes
- [ ] Wi-Fi connection
- [ ] Python server + database
- [ ] Phone control
