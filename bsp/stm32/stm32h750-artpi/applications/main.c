/*
 * @Author: SNOWA wlmsingle@163.com
 * @Date: 2024-03-25 12:52:18
 * @LastEditors: SNOWA wlmsingle@163.com
 * @LastEditTime: 2024-03-29 09:15:41
 * @FilePath: \rt-thread\bsp\stm32\stm32h750-artpi\applications\main.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2021-03-17     supperthomas first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <board.h>
#include "elog.h"
/* defined the LED0 pin: PI8 */
#define LED0_PIN    GET_PIN(C, 11)
#define LED1_PIN    GET_PIN(C, 10)
static void init_elog()
{
	elog_init();
	elog_set_fmt(ELOG_LVL_ASSERT, ELOG_FMT_ALL & ~ELOG_FMT_P_INFO);
	elog_set_fmt(ELOG_LVL_ERROR, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
	elog_set_fmt(ELOG_LVL_WARN, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
	elog_set_fmt(ELOG_LVL_INFO, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
	elog_set_fmt(ELOG_LVL_DEBUG, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
	elog_set_fmt(ELOG_LVL_VERBOSE, ELOG_FMT_LVL | ELOG_FMT_TAG | ELOG_FMT_TIME);
	/* start EasyLogger */
	elog_start();
}
int main(void)
{
    /* set LED0 pin mode to output */
    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
	rt_pin_mode(LED1_PIN, PIN_MODE_OUTPUT);
    rt_uint16_t tick=0;
    init_elog();
    set_date(2024,1,1);
    set_time(8,0,0);
    while (1)
    {
        rt_pin_write(LED0_PIN, PIN_HIGH);
		rt_pin_write(LED1_PIN, PIN_HIGH);
        rt_thread_mdelay(500);
        rt_pin_write(LED0_PIN, PIN_LOW);
		rt_pin_write(LED1_PIN, PIN_LOW);
        rt_thread_mdelay(500);
        elog_v("test","tick :%d",tick++);
    }
}

#include "stm32h7xx.h"
static int vtor_config(void)
{
    /* Vector Table Relocation in Internal QSPI_FLASH */
    SCB->VTOR = QSPI_BASE;
    return 0;
}
INIT_BOARD_EXPORT(vtor_config);
