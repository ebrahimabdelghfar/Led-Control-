# Controller
<p align="center">
  <img src="https://user-images.githubusercontent.com/81301684/181343126-c2998edf-4778-4fdf-8358-7b039778dd13.png" />
</p>

# Description 
 - The Led will be turned ON for specfic period of time determined by using Timer peripheral
 - After that we specify the OFF time by using different timer 
 - The Led will start dimming untill it become compeletly OFF
 - After the the OFF time has just finished the timer interupt will raise the flag to repeat the loop
 - We can change the Led color by using built on switchs on tiva by using interupt 
# Drivers
all drivers are existing in MCAL folder which is used : </br>
 - Interupt Driver  ----> Is used to intiate the interupt of every pin of GPIO's Ports.
 - DIO Driver       ----> Is used to configure all the pin as "Digital / Input or Output / Pull Up or Pull Down / Write or Clear"
 - Timer Driver     ----> This driver is used to configure the general purpose timer "GPTM" and contain delay in Micro or Milli and setting dimming light
 # Video Working
 
https://user-images.githubusercontent.com/81301684/181361138-5390d194-1255-4d59-bd5c-a4c8112c48ac.mp4

