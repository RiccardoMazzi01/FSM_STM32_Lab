#include "FSM.h"
#include "runtime.h"

int nextState(int currState, char input)
{
    switch(currState)
    {
        case 0: // if I am in S0 with the green LED
            switch(input)
            {
                case 'd':
                    write("GREEN;1000$",11);
                    debug("GREEN;1000$");
                    TurnGreenOn();
                    HAL_Delay(1000);
                    TurnGreenOff();
                    return 1;
                case 'n':
                	write("GREEN;1000$",11);
                	debug("GREEN;1000$");
                	TurnGreenOn();
                	HAL_Delay(1000);
                	TurnGreenOff();
                    return 1;
                default:
                    break;
            }
            break;

        case 1: // if I am in S1 with the yellow LED
            switch(input)
            {
                case 'd':
                	write("YELLOW;1000$",12);
                	debug("YELLOW;1000$");
                	TurnYellowOn();
                	HAL_Delay(1000);
                	TurnYellowOff();
                    return 2;
                case 'n':
                	write("YELLOW;1000$",12);
                	debug("YELLOW;1000$");
                	TurnYellowOn();
                	HAL_Delay(1000);
                	TurnYellowOff();
                    return 2;
                default:
                    break;
            }
            break;

        case 2: // if I am in S2 with the red LED
            switch(input)
            {
                case 'd':
                	write("RED;1000$",9);
                	debug("RED;1000$");
                	TurnRedOn();
                	HAL_Delay(1000);
                	TurnRedOff();
                    return 0;
                case 'n':
                	write("RED;1000$",9);
                	debug("RED;1000$");
                	TurnRedOn();
                	HAL_Delay(1000);
                	TurnRedOff();
                	return 3;
                default:
                    break;
            }
            break;

        case 3: // if I am in S3 with the flashing yellow LED
            switch(input)
            {
                case 'd':
                	write("YELLOW;1000$",12);
                	debug("YELLOW;1000$");
                	TurnYellowOn();
                	HAL_Delay(1000);
                	debug("");
                	TurnYellowOff();
                	HAL_Delay(1000);
                    return 0;
                case 'n':
                	write("YELLOW;1000$",12);
                	debug("YELLOW;1000$");
                	TurnYellowOn();
                	HAL_Delay(1000);
                	debug("");
                	TurnYellowOff();
                	HAL_Delay(1000);
                   	return 3;
                default:
                    break;
             }
             break;

        default: // if I am in S>4 internal error
            return -2;
    }

    // If we're here, it's an error
    return -1;
}
