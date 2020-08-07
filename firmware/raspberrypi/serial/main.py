import serial
import json

a = {1: 'false'}
ser = serial.Serial(port = "com21", baudrate = 9600)




if __name__ == "__main__":
    while 1:
        if ser.readable():
            res = ser.readline()
            #a = res.find('((')

        
            print(res)

