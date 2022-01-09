# The Effects of Wavelength on an LED based Single Photon Avalanche Detector
### Skills: integration spheres, avalanche currents, serial outputs, Poissonian statistics 

Worked on with Kobe Chen

This project uses an integrating sphere, PSoC, Python, and Excel. I explored LED based single photon avalanche detector. 

Below is an image of the integrating sphere making sure the only light that got the reverse biased LED was from the source light.

<img src=https://github.com/jacobsc050/senior-thesis/blob/main/assets/darkBox.png width="300" height="300">

Below is an image of the PSoC collecting data from the reversed biased LED, a power supply powering both LEDS, an oscilloscope to visualize the avalanche currents, and 
the PSoC being connected to the serial port of the computer.  

<img src=https://github.com/jacobsc050/senior-thesis/blob/main/assets/setUp.png width="300" height="300">

The code for the PSoC to collect the data from the reverse biased LED and output the data to the serial port.

[PSoC main code](https://github.com/jacobsc050/senior-thesis/blob/main/counter.c)
 
After the data from the PSoC got to the serial port I used python to collect the data and transfer it to an excel file.
 
[collecting Serial output with Python](https://github.com/jacobsc050/senior-thesis/blob/main/photonCountings.py)
 
Here is the scientific paper written in Latex to explain the project in more detail. 
 
[Latex output](https://github.com/jacobsc050/senior-thesis/blob/main/assets/Senior%20Thesis.pdf)
