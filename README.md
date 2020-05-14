# Arduino-serial
A guide on sending signals to an Arduino Uno to toggle the inner LED by creating Flask GUI

First, we need to program the Arduino. In this project, we used an Elegoo Uno R3 which acts as an Arduino Uno.
We use the Arduino IDE to then program onto it. The Arduino code can be seen in the keyinputc.ino file.
We then verify and upload the code into the Arduino.

Secondly, we establish the serial connection with the Arduino using Python. In order to do so, we
install the pySerial library in Python. This can be installed from PyPI using the "python -m pip install pyserial" command.
Please visit https://pyserial.readthedocs.io/en/latest/ for more information on pySerial. Once this is done,
we can import serial in Python and test out the serial connection. Essentially we encode a triggering value
into the arduino using the write function imported from the serial library to make the inner LED blink according 
to the arduino code. In our case, we use the value c to trigger a high voltage through pin 13 where the inner LED of
the Arduino is located. If that works, we're on right track to build the flask GUI. 

Then, we can create a new directory for html templates to be stored in. Then, we can code an html file consisting 
of forms with GET and/or POST methods which will be used in the server side to generate signals to the arduino. In our case, 
we used submit buttons. Please view attached "main.html" file for more information.

Subsequentently, we can connect this template with Flask by importing Flask, render_template and request in our python code.
View attached "prac.py" for more information.

Finally, we are good to go! Run the Python code and we can finally send signals to the arduino 
using a flask GUI to make the inner LED go on and off.

Have fun!
