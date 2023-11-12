# HW10

 The effect I'm trying to achieve is to light up an LED every ten seconds, with the first light being dimmer and the later the brighter it gets. So I chose to map the brightness using map().

 I first test one LED.
 ![GbpIpR.jpg](https://imgpile.com/images/GbpIpR.jpg)

 Then I connect 6 LEDs in parallel.
 ![Gbp7Tg.jpg](https://imgpile.com/images/Gbp7Tg.jpg)

 At first I chose pins D2-7, but then I realized that not every pin seems to support PWM, so there are always LEDs that don't light up. I didn't know where to check so I experimented one by one and settled on the final pins.

 The end result I found was that each light didn't light up brightly or dimly. I don't know if it's a different specification of the LEDs or a problem with my code :(
 ![GbpNlc.jpg](https://imgpile.com/images/GbpNlc.jpg)