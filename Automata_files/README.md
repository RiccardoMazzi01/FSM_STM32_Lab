## This is the folder to setup the FSM into your project!
Before starting, connect the board, the LCD screen and the LEDs as the scheme below:



First of all, create your project with the STM32CubeIDE: select your board and click "Next"; then choose a name and click "Finish". Now you will see the "YOUR_PROJECT.ioc" file, if not, open it. You will see the board with all the pins.
![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/ioc.png)
Click the "Pinout" menu, then click "clear pinouts" and then "yes". Now all the pins have been resetted and we can activate the pins we need.

- First of all, zoom in, click on the "PB8" pin and select "I2C1_SCL"; now click the "PB9" pin and select "I2C1_SDA". Now, on the left list, click on "Connectivity", then "I2C1" and set it to "I2C". These two pins are for the LCD Screen.

- Secondly, click the "PB7" pin and set it to "USART1_RX"; now click the "PB8" pin and select "USART1_TX". Now, on the lef list, click "Connectivity", "USART1" and select the "Asynchronous" mode. These pins are for the serial communication.

- Finally, on the left side of the board, click the "PC0" pin and set it to "GPIO_Output"; do the same thing also with "PC1" and "PC2" pins. these three pins are for the LEDs.

Save and wait for the code generation.

Now return to the "Automata_files" folder. In this folder you will find 2 sub-folders and a "main.c" file to set into your project:

- "FSM" folder: In this folder you will find 2 files (FSM.c and FSM.h): you must put "FSM.c" in the "Src" folder of your project following this path "YOUR_PROJECT/Core/Src"; after that, you have to put "FSM.h" in the "Inc" folder of your project following this path "YOUR_PROGECT/Core/Inc".

- "runtime" folder: you will se another folder called "STM32" and a file named "runtime.h"; move the "runtime.h" file in the "Inc" folder of your project ("YOUR_PROJECT/Core/Inc"). Now open the "STM32" folder; there will be 3 files: you have to move "runtime.c" and "liquidcrystal_i2c.c" in the "Src" folder ("YOUR_PROJECT/Core/Src"); then put the last file "liquidcrystal_i2c.h" in the "inc" folder ("YOUR_PROJECT/Core/Inc").

- "main.c" file: open the file in an editor; you'll see that there are two includes (#include "runtime.h", #include "FSM.h"): copy and paste them below the #include "main.h" into the "main.c" of your IDE project at this path "YOUR_PROJECT/Core/Src/main.c". After that, copy and paste the code between the "USER CODE BEGIN 2" and "USER CODE END 2" lines into the respective lines of the "main.c" of your project.

Now you're ready to go! Click the "Run" button and enjoy your semaphore!
