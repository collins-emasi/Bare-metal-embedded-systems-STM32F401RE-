/*
 * tim.h
 *
 *  Created on: Feb 16, 2023
 *      Author: emasi
 */

#ifndef TIM_H_
#define TIM_H_

void tim2_1hz_init(void);
void tim2_PA5_output_compare(void);

#define SR_UIF		(1U << 0)

#endif /* TIM_H_ */
