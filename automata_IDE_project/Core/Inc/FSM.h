#ifndef INC_FSM_H_
#define INC_FSM_H_

/*
 * Computes next state. Returns the following
 *   >=0 : the next state
 *   -1  : input sequence not legal
 *   -2  : we're in final state
 *   -3  : internal error
 */
int nextState(int currState, char input);

#endif /* INC_FSM_H_ */
