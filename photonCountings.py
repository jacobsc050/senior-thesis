import serial

import xlsxwriter


port = serial.Serial('COM5', 115200) #communicates to serial port 5 (check in device manager > ports), with baudrate 9600, make sure the baudrate is the same as the UART on the PSoC
port.timeout = 1
print(port)
counter = 1



counter = 10
workbook = xlsxwriter.Workbook('dataTest.xlsx')
worksheet = workbook.add_worksheet()
col = 0
for columnHead in ["Counter 1"]:
    worksheet.write(0, col, columnHead)
    col+=1

for row in range(1,counter+1):
    try:
        for column in range(1):
            reading = int(port.readline())
            print(reading)
            worksheet.write(row, column, reading)
    except:
        continue
    if row == counter:
        break
workbook.close()
print("done")