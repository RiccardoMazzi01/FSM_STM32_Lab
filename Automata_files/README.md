# This is the folder to setup the FSM into your project!
Before starting, connect the board, the LCD screen and the LEDs as the scheme below:

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/scheme.jpg)

First of all, create your project with the STM32CubeIDE: select your board and click "Next"; then choose a name and click "Finish". Now you will see the "YOUR_PROJECT.ioc" file, if not, open it. You will see the board with all the pins.

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/ioc.png)

Click the "Pinout" menu, then click "clear pinouts" and then "yes".
Now all the pins have been resetted.

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/clear%20pinouts.png)

Let's activate our pins:

- First of all, zoom in, click on the "PB8" pin and select "I2C1_SCL"; now click the "PB9" pin and select "I2C1_SDA".

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/lcd_yellow.png)

Now, on the left list, click on "Connectivity", then "I2C1" and set it to "I2C". 

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/lcd_green.png)

These two pins are for the LCD Screen.

- Secondly, click the "PB7" pin and set it to "USART1_RX"; now click the "PB8" pin and select "USART1_TX".

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/usart_yellow.png)

Now, on the left list, click "Connectivity", "USART1" and select the "Asynchronous" mode.

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/usart_green.png)

These pins are for the serial communication.

- Then, on the left side of the board, click the "PC0" pin and set it to "GPIO_Output"; do the same thing also with "PC1" and "PC2" pins.
 
![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/LEDs.png) 
 
These three pins are for the LEDs.

- Finally, again on the left list, go to the "Timers" section and click on "TIM2":

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/tim2_off.png)

Set the Clock Source to "Internal Clock".

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/tim2_on.png)

## Save and wait for the code generation.

Now return to the "Automata_files" folder. In this folder you will find 2 sub-folders and a "main.c" file to set into your project:

- "FSM" folder: In this folder you will find 2 files (FSM.c and FSM.h): you must put "FSM.c" in the "Src" folder of your project following this path "YOUR_PROJECT/Core/Src"; after that, you have to put "FSM.h" in the "Inc" folder of your project following this path "YOUR_PROGECT/Core/Inc".

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/fsm.png)

- "runtime" folder: you will se another folder called "STM32" and a file named "runtime.h"; move the "runtime.h" file in the "Inc" folder of your project ("YOUR_PROJECT/Core/Inc"). Now open the "STM32" folder; there will be 3 files: you have to move "runtime.c" and "liquidcrystal_i2c.c" in the "Src" folder ("YOUR_PROJECT/Core/Src"); then put the last file "liquidcrystal_i2c.h" in the "inc" folder ("YOUR_PROJECT/Core/Inc").

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/runtime.png)

- "main.c" file: open the file in an editor; you'll see that there are two includes (#include "runtime.h", #include "FSM.h"): copy and paste them below the #include "main.h" into the "main.c" of your IDE project at this path "YOUR_PROJECT/Core/Src/main.c".

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/includes.png)

After that, copy and paste the code between the "USER CODE BEGIN 2" and "USER CODE END 2" lines into the respective lines of the "main.c" of your project.

![](https://github.com/RiccardoMazzi01/FSM_STM32_Lab/blob/main/images/user_code_2.png)

# Now you're ready to go! Click the "Run" button and enjoy your semaphore!
