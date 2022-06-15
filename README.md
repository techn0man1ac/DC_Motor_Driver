# BJT/MOSFET DC Motor Driver

![3D_Board](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/3D_Board_Up.png)

- Vin 10..20 V;
- PWM(EN pin, active LOW level) up to 1 KHz(with PC817 optocoupler);
- Current 2..4 A(Q1, Q4 - TIP122 / Q2, Q3 - TIP127, FU1 5A), 3..9 A(Q10, Q6 - IRF9540 / Q9, Q5 -IRF540, FU1 10A).

Arduino code:

https://github.com/techn0man1ac/DC_Motor_Driver/tree/main/DC_Motor_Driver


PCB have are 800x522mm, one(blue) or two Layers:

![PCB_Board_Layers](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/PCB_Board_Layers.png)

The minimum track size is 0.254 mm.

Here gerbers files:
https://github.com/techn0man1ac/DC_Motor_Driver/tree/main/Board/Gerbers

Schematic(BJT or MOSFET):

![Schematic BJTs/MOSFETs_DC_Motor_driver](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/BJTs_MOSFETs_DC_Motor_driver.png)

Project have are Proteus 8.11 model:

![Proteus 8.11 model](https://raw.githubusercontent.com/techn0man1ac/DC_Motor_Driver/main/Board/Images/Proteus%208%20model.jpg)

PCB and schematic page:
https://oshwlab.com/raznie.podelki/bjt_motordriver

(c) https://itectec.com/electrical/electronic-bjh-h-bridge-going-in-reverse-but-not-forward-ll-transistor-overheating/
