/*
 * @Author: SNOWA wlmsingle@163.com
 * @Date: 2024-03-25 12:52:18
 * @LastEditors: SNOWA wlmsingle@163.com
 * @LastEditTime: 2024-03-27 09:34:52
 * @FilePath: \rt-thread\bsp\stm32\stm32h750-artpi\board\port\spi_flash_init.c
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-11-07     wanghaijing  the first version
 */

#include <rtthread.h>
#include <rtdevice.h>
#include <spi_flash.h>
#include <drv_spi.h>

static int rt_flash_init(void)
{
    extern rt_spi_flash_device_t rt_sfud_flash_probe(const char *spi_flash_dev_name, const char *spi_dev_name);
    extern int fal_init(void);

    rt_hw_spi_device_attach("spi6", "spi60", GET_PIN(A, 4));

    /* initialize SPI Flash device */
    rt_sfud_flash_probe("norflash0", "spi60");

    fal_init();

    return 0;
}
INIT_COMPONENT_EXPORT(rt_flash_init);
