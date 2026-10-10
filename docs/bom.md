# Bill of Materials

| Component | Qty | Spec | Purpose |
|---|---|---|---|
| ESP32 DevKit | 1 | ESP-WROOM-32, Micro-USB | Main controller |
| SK6812 RGBW LED strip | 1 | 5V, warm white (RGBWW), 60 LEDs/m, 1m, IP30 | The lamp itself |
| Power supply adapter | 1 | 5V 4A, EU plug, 5.5x2.5mm barrel | Powers the LED strip |
| DC barrel jack adapter | 1 | Female 5.5x2.5mm to screw terminals | Connects the power supply to the LED strip without cutting wires |
| Capacitor | 1 | 1000µF 16V electrolytic | Smooths power spikes on the LED strip input |
| Level shifter | 1 | SN74AHCT125N, DIP-14 | Boosts the 3.3V data signal from the ESP32 to 5V for the LED strip |
| Light sensor (LDR) | 1 | GL5528 photoresistor | Measures ambient light level |
| Resistor | 1 | 10kΩ | Forms a voltage divider with the LDR |
| Motion sensor (PIR) | 1 | HC-SR501 | Detects motion in the room |
| Breadboard | 2 | 830 points | Solderless prototyping |
| Jumper wires | ~70 | 20cm, M-M / M-F / F-F | Connections between components |



