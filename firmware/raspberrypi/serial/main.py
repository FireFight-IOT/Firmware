import serial
import json

json_D = {'0': 0}
ser = serial.Serial(port = "com21", baudrate = 9600)

if __name__ == "__main__":
    json_D.clear()
    while 1:
        if ser.readable():
            res = ser.readline()
            res = res[0:9]
            res = res.decode()[:len(res)]
        for i in range(0,5):
            a = i + 1
            json_D[a] = str(res).split(' ')[i]
        ptc = json.dumps(json_D)
        print(ptc)

