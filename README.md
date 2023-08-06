# BJT/MOSFET DC Motor Driver

Fully isolated DC driver for collector motors 3..9 Amps:

![Real board photo](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/DC_Driver_Board_Photo.jpg "Real board photo")

Specifications:
- Vin 10..20 V;
- PWM(EN pin, active LOW level) up to 1 KHz(with PC817 optocoupler);
- Current 2..4 A(Q1, Q4 - TIP122 / Q2, Q3 - TIP127, FU1 5A), 3..9 A(Q10, Q6 - IRF9540 / Q9, Q5 -IRF540, FU1 10A).

Schematic(BJT or MOSFET):

![Schematic BJTs/MOSFETs_DC_Motor_driver](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/BJTs_MOSFETs_DC_Motor_driver.png "Schematic BJTs/MOSFETs_DC_Motor_driver")
  
PCB have are 800x522mm, one(blue) or two Layers:

![PCB_Board_Layers](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/PCB_Board_Layers.png "PCB_Board_Layers")

The minimum track size is 0.254 mm.

![3D_Board](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/3D_Board_Up.png "3D_Board")


3D model file:

https://github.com/techn0man1ac/DC_Motor_Driver/tree/main/Board/3D%20model/OBJ_PCB_BJT

PCB and schematic page:

https://oshwlab.com/raznie.podelki/bjt_motordriver

Here gerbers files:

https://github.com/techn0man1ac/DC_Motor_Drive/tree/main/Board/Gerbers

Project have are Proteus 8.11 model:

![Proteus 8.11 model](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/Proteus%208%20model.jpg "Proteus 8.11 model")

Arduino code:

https://github.com/techn0man1ac/DC_Motor_Driver/tree/main/DC_Motor_Driver

The idea of the circuitry from here:

https://itectec.com/electrical/electronic-bjh-h-bridge-going-in-reverse-but-not-forward-ll-transistor-overheating/
