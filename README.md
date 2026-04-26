# Punch Card Reader
An Arduino MEGA microcontroller-based system designed to read punched holes in a card as ASCII characters and displaying the characters on an LCD screen. 

Designed by Bryson Crader (Bryson-C) and Theodore Tran (TheoLT839)
LiquidCrystal I2C (ver. 1.1.2) by Frank de Brabander

# Attributions
- Project designed by Bryson Crader (Bryson-C) and Theodore Tran (TheoLT839).
- LiquidCrystal_I2C library created by Frank de Brabander and João Pedro São Gregorio Silva.

# Build & Run Instructions
1. Download and extract the `.ZIP` folder.
2. In an IDE such as the [Arduino IDE](https://www.arduino.cc/en/software/), open the `punchcardreader.ino` file.
3. Verify and upload the code to the punch card reader's microcontroller. After the code has been uploaded, the Punch Card Reader will run automatically as long as it is plugged into a power source.

# Parts List
- [ELEGOO MEGA R3 ATmega2560 Board](https://www.amazon.com/ELEGOO-Compatible-Arduino-Projects-Compliant/dp/B01H4ZLZLQ?th=1%C2%A0)
- [Photoresistors](https://www.amazon.com/eBoot-Photoresistor-Sensitive-Resistor-Dependent/dp/B01N7V536K?crid=RGKBBFUKYJF1&dib=eyJ2IjoiMSJ9.C5UXRPzizqqlMspRn6eTel-q-LW7yVEVIgGxRO9nK9E2hVJoKEyDnhEZ7FrH2ChNt45r3jclZflIX19m0GYS2ITF1b2Zz6knNqIyrXpdMgNA0C3YDv8O9NXasCj9z_ITVTgMegJecQwlMTm2yfvtge8Bozd9PHUAIyyAUsLl0lu2IyLmlHf5_wdwvnp73067xb4yOhl9TyoyIQvgUVo1rrAmB1JTUqpH1EM_OGMbhhfvaLn763iienWpeIWrJ-gb9HI1AMR05LaArLwK1b-zAdK89z_Hx-PIt1hUq_25bko.pF6DpPbz4Ky_kUXI181NLaveTzYRPxM_4DGp90tfZyE&dib_tag=se&keywords=arduino%2Bphoto%2Bresistors&qid=1770581562&sprefix=arduino%2Bphoto%2Bresis%2Caps%2C188&sr=8-1&th=1)
- [LCD Panel](https://www.amazon.com/Display-Backlight-Arduino-ESP8266-Raspberry/dp/B0DHGNBC2Y?crid=1Z1SEXZ49K5KF&dib=eyJ2IjoiMSJ9.T1sACSmn5VVgu926GDVBKo5ilgUrP5S5w-IQhI2worTvgU9JW7c1zdkHVjoe4zhAQLEOxuEQWxKwQM6LzgrgPThZH59b58J1--4qmitE-M6XHGmbYSWnUF0-YfiSkuxb5yPjzUlvUkt1_zjl7I30C9BEWRSpBFqbvuBjEdAM3LLd9sUBFXbMYUzurCddS-jXIT6P8asgLms6kG3HBDu2WieqpsrQZvYoi7paTsqcXqM.MpO9Vpy25uLiAw3tgaFITQjjip2oDsJoUiJvXpMO9Lg&dib_tag=se&keywords=arduino%2Blcd%2Bdisplay&qid=1770581656&sprefix=arduino%2Blcd%2Caps%2C200&sr=8-9&th=1)
- [LEDs](https://www.amazon.com/California-JOS-50-PCS-Colorful/dp/B0CR886L92?crid=HPZYK1SOJ6MX&dib=eyJ2IjoiMSJ9.MntczjhE5eIrM8VtfFQ8pafcwyvTnR5irb5sv0GXDdSKTSHi3SDyPTineHknFIaAwWgGK4jvajFosLbZcKwZ4EwRi0_XIPFnJRgzbDZWYFo5H4AJAuH_yRZGQ-B_VVwoTYPa6e8lNfeqNuH6IKAbQXhfabnsEdJ1zjMx1jhGbRDY9-VB6WCRxEzJYcSObZxkqpY_BOjyzTYlCo-_th-4_SYT5LULPoFJdaAW8ld17VM.nMseKRDxbF61ORhGRvMzLnfbaoPgmGM4OCBUkIOIIKQ&dib_tag=se&keywords=arduino%2Bled&qid=1770581991&sprefix=arduino%2Bled%2B%2Caps%2C196&sr=8-1&th=1)
- [Resistors](https://www.amazon.com/Resistor-Resistors-Assortment-Breadboard-Electronics/dp/B0F4P352BB/ref=sr_1_3?crid=XTEHS0PKCGXP&dib=eyJ2IjoiMSJ9.51CpWqJSseWX_hEqqJr41AbdsMj3JnUWwQX1kHL7uCNyt1GXuS2jGn7x4I0TCVROUFIXgwMKnzEGgxdhk5Npyiflxmnr04tHjT8p-8WYxwVNRKWQBqYqmNrQWacofq9QpCiXsQWHElYEgOXcYuVh5-llT5MHy6NexWAuXhhSUjkbQ_xGg7_T2oiM3vnileju9lJKmy2mW4fk9Zo_Yd8GLWI5XGMGdk3bMoTQXupF3FE.iQIkXb-oynIPVbOf3Hrw-Q_skzucvRxC0eImQBI-pIg&dib_tag=se&keywords=arduino+resistors&qid=1772145012&sprefix=arduino+resistors%2Caps%2C188&sr=8-3)
- [Breadboard + Jumper Wires](https://www.amazon.com/BOJACK-Values-Solderless-Breadboard-Flexible/dp/B08Y59P6D1/ref=sr_1_1?crid=2AB4EPUVFUEPT&dib=eyJ2IjoiMSJ9.TR44JjiGr0HpelabqR-wimnMPgj9oyAvkiuqBduXgZXJeJ8Yybi0qqo6QBLV9jZ8HUb3TDOEcuaYUJEN074woH7IGMarSF8hfvF1uyllJZ-ovYqIrfXDkzg6D56wh4xUh6H9_GTokDqPl-K6LY7XRiCNWJFbTYFURcmei31BtfZVN_5YAJ_k2GC2hGCoqCHfWbDnimfHz5EkVkkB_HpgCEphopeesNo7Z6u4OEJn3GQ.DBNrS0R5LeBFVfc2tCDM2ormuiGFfoKve7R7qNN8K_Y&dib_tag=se&keywords=arduino+breadboard&qid=1772144690&sprefix=arduino%2Bbread%2Caps%2C220&sr=8-1)
- [Male-to-Female Jumper Wires](https://www.amazon.com/California-JOS-Breadboard-Optional-Multicolored/dp/B0BRTHR2RL/ref=mp_s_a_1_4?crid=32VGIILQUK627&dib=eyJ2IjoiMSJ9.QGbaFF62mgZ1Tf0J7CajkBnivKMOTOpZJUS1O07RvMSFcHSDSDbY8ZZLc1Xfvo32xQADqo45OJPUgv310mc3702P2zL1jDX-7zpChnSITNL7W-qJXWREYnmjHImpeuTXbkNlO9CXny7IQYWXzi4TBWiBzwjFpPZaxjhhngYHE9dqHaBtqzyKRD0QOmMK0CmZigfbXQojR5Fcmv14q1AcYQ._rIXRTx3pZCATmbWj4GQe-v4v6xdH42nLVQ2vINI7S4&dib_tag=se&keywords=male+to+female+jumper+wires&qid=1775093557&sprefix=male+to+female+%2Caps%2C359&sr=8-4)
