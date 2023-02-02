#include "runtime_Inc/runtime.h"
#include "FSM_inc/FSM.h"

int main() {
    /* USER CODE BEGIN 2 */
    HAL_TIM_PWM_Start(&htim2, TIM_CHANNEL_1);
    HD44780_Init(2);

    int currState = 0;
    int state = -1;
    char c;
    while(1)
    {
        // Get next input
        c = nextInput();

        state = nextState(currState, c);

        // Check for errors
        if(state < 0)
            goto error;

        // Update curr state
        currState = state;
    }
    return 0;

    error:
    debug("ERROR!");
    return state;
    /* USER CODE END 2 */
}
