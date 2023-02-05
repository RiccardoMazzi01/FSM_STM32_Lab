#ifndef INC_RUNTIME_H_
#define INC_RUNTIME_H_

/*
 * Gets next inputs, or 'x' if no inputs available.
 * WARNING: this function shifts the input, once you call it!
 */
char nextInput();

/* This function writes a string to the serial*/
void write(const char * str, int len);

/* This function writes a debug string on the LCD display*/
void debug(const char * str);

/* these functions turn on the LEDs */
void TurnGreenOn();
void TurnYellowOn();
void TurnRedOn();

/* these functions turn off the LEDs */
void TurnGreenOff();
void TurnYellowOff();
void TurnRedOff();

#endif /* INC_RUNTIME_H_ */
