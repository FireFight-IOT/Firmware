import serial
import json

ser = serial.Serial(port = "/dev/ttyACM0", baudrate = 115200)

def serial_changejson():
    json_D = {'1': 0, '2': 0, '3': 0, '4': 0, '5': 0}

    while 1:
        json_D.clear()
        if ser.readable():
            res = ser.readline()
            res = res[0:9]
            res = res.decode()[:len(res)]
        for i in range(0, 5):
            a = i + 1
            val = str(res).split(' ')[i]
            json_D[a] = int(val)

        ptc = json.dumps(json_D)

        yield ptc

if __name__ == "__main__":
    a = serial_changejson()
    while 1:
        print(next(a))

