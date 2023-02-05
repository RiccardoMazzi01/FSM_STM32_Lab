#include "runtime.h"
#include "liquidcrystal_i2c.h"

extern UART_HandleTypeDef huart1;

/* "d" stands for "day", "n" stands for "night" */
const char inputs[] = {'d', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'd', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n', 'n'};
int ninputs = sizeof(inputs) / sizeof(inputs[0]);

char nextInput()
{
    static int i = 0;
    if (i >= ninputs)
        i = 0;
    return inputs[i++];
}

void write(const char * str, int len){
	HAL_StatusTypeDef retval=HAL_UART_Transmit(&huart1,str,len,20);
}

void debug(const char * str){
    HD44780_Clear();
    HD44780_SetCursor(0,0);
    HD44780_Backlight();
    HD44780_PrintStr(str);
}

void TurnGreenOn()
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, 1);
}

void TurnGreenOff()
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_2, 0);
}

void TurnRedOn()
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 1);
}

void TurnRedOff()
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_0, 0);
}

void TurnYellowOn()
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 1);
}

void TurnYellowOff()
{
    HAL_GPIO_WritePin(GPIOC, GPIO_PIN_1, 0);
}
