/* * This file is part of Cleanflight and Betaflight.
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
    DEF_TIM(TMR2, CH4, PA3, TIM_USE_ANY | TIM_USE_PPM, 0, 6, 0),             // PWM2 - OUT1 DMA1 CH6

    DEF_TIM(TMR4, CH4, PB9, TIM_USE_MOTOR, 0, 0, 1),                 // motor1 DMA1 CH1
    DEF_TIM(TMR4, CH3, PB8, TIM_USE_MOTOR, 0, 2, 1),                 // motor2 DMA1 CH3
    DEF_TIM(TMR4, CH2, PB7, TIM_USE_ANY | TIM_USE_MOTOR, 0, 1, 0),                 // motor3 DMA1 CH1
    DEF_TIM(TMR4, CH1, PB6, TIM_USE_ANY | TIM_USE_MOTOR, 0, 3, 0),                 // motor4 DMA1 CH4
    DEF_TIM(TMR3, CH2, PB5, TIM_USE_ANY | TIM_USE_MOTOR, 0, 11, 10), // motor5 DMA2 CH5
    DEF_TIM(TMR3, CH3, PB0, TIM_USE_ANY | TIM_USE_MOTOR, 0, 10, 10), // motor6 DMA2 CH4
    DEF_TIM(TMR3, CH4, PB1, TIM_USE_ANY | TIM_USE_MOTOR, 0, 8, 10),  // motor7 DMA2 CH2
    DEF_TIM(TMR2, CH1, PA15,TIM_USE_ANY | TIM_USE_MOTOR | TIM_USE_LED, 0, 9, 10),  // motor8 DMA2 CH3
};
