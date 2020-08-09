import serial
import json

json_D= {'0': 0}
ser = serial.Serial(port = "com21", baudrate = 9600)

if __name__ == "__main__":
    while 1:
        if ser.readable():
            res = ser.readline()
        for i in range(1,6):
            json_D[i] = int(res.split(' ')[0])
        ptc = json.dumps(json_D)
        print(ptc)

