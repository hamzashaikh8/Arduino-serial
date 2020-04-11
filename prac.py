import serial
from serial import Serial
from flask import Flask, render_template, request

app = Flask(__name__)

global ser
try:
  ser = serial.Serial('COM8', 9600)
except:
  print("Error, Serial Connection failed! Please try again!")


@app.route('/', methods=['POST', 'GET'])
def hello():
  # we will try to establish a serial connection with the arduino
  if request.method == "POST":  # POST method associated with ON in main.html
    ser.write('c'.encode())
  elif request.method == "GET":
    ser.write('x'.encode())  # random input to trigger pin 13 to LOW
  else:
    pass  # nothing happens
  return render_template('main.html')


if __name__ == '__main__':
  app.run()






















