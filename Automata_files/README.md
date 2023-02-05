This is the folder to setup the FSM into your project!
First of all, open your project with the STM32CubeIDE; now open the "YOUR_PROJECT.ioc" file. You will see the board with all the pins. Click the "Pinout" menu, then click "clear pinouts" and then "yes". Now all the pins are resetted and we can activate the pins we need.

First of all, zoom in, click on the "PB8" pin and select "I2C1_SCL"; now click the "PB9" pin and select "I2C1_SDA". These two pins are for the LCD Screen.

Secondly, click the "PB7" pin and set it to "USART1_RX"; now click the "PB8" pin and select "USART1_TX". These pins are for the serial communication.

In this folder you will find 2 sub-folders and a "main.c" file:

- "FSM" folder: In this folder you will find 2 files (FSM.c and FSM.h): you must put "FSM.c" in the "Src" folder of your project following this path "YOUR_PROJECT/Core/Src"; after that, you have to put "FSM.h" in the "Inc" folder of your project following this path "YOUR_PROGECT/Core/Inc".

- "runtime" folder: you will se another folder called "STM32" and a file named "runtime.h"; move the "runtime.h" file in the "Inc" folder of your project ("YOUR_PROJECT/Core/Inc"). Now open the "STM32" folder; there will be 3 files: you have to move "runtime.c" and "liquidcrystal_i2c.c" in the "Src" folder ("YOUR_PROJECT/Core/Src"); then put the last file "liquidcrystal_i2c.h" in the "inc" folder ("YOUR_PROJECT/Core/Inc").

spiegare main
