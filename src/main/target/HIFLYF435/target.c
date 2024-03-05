/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include "platform.h"
#include "drivers/io.h"

#include "drivers/dma.h"
#include "drivers/timer.h"
#include "drivers/timer_def.h"

const timerHardware_t timerHardware[USABLE_TIMER_CHANNEL_COUNT] = {
    DEF_TIM(TMR2, CH4, PA3,  TIM_USE_ANY | TIM_USE_PPM, 0, 5, 0),
    DEF_TIM(TMR3, CH1, PC6, TIM_USE_MOTOR, 0, 1, 0),                 // motor4 DMA1 CH4
    DEF_TIM(TMR3, CH2, PC7, TIM_USE_MOTOR, 0, 2, 0),                 // motor3 DMA1 CH1
    DEF_TIM(TMR8, CH3, PC8, TIM_USE_MOTOR, 0, 3, 0),                 // motor2 DMA1 CH3
    DEF_TIM(TMR8, CH4, PC9, TIM_USE_MOTOR, 0, 4, 0),                 // motor1 DMA1 CH1

    DEF_TIM(TMR2, CH1, PA15,  TIM_USE_ANY | TIM_USE_LED, 0, 0, 0),   // LED D(1,0) UP(2,6)

    //DEF_TIM(TIM5, CH1, PA0,  TIM_USE_PWM, 0, 0),   // TX4 UP(1,6) D(1,2)!S1
    //DEF_TIM(TIM5, CH2, PA1,  TIM_USE_PWM, 0, 0),   // RX4 UP(1,6) D(1,4)
    //DEF_TIM(TIM9, CH1, PA2,  TIM_USE_PWM, 0, 0),   // TX2
};
