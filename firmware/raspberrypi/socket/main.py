import socket
import json

HOST = '127.0.0.1'
PORT = 8080
a = {1:1 ,2:0 ,3:0}

data = json.dumps(a)

while 1:
    try:
        HW_socket: socket = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
        HW_socket.connect((HOST, PORT))
        HW_socket.sendall(bytes(data,encoding="utf-8"))

        data = HW_socket.recv(1024)
        print('Received', repr(data.decode()))

    finally:
        HW_socket.close()

