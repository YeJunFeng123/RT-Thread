#include "rtthread.h"
#include "app_rt_thread.h"
#include "stdio.h"
#include "main.h"
#include <rtdevice.h>
#include <board.h>
#include "elog.h"

/* defined the LED0 pin: PI8 */
#define LED0_PIN    GET_PIN(C, 11)
#define LED1_PIN    GET_PIN(C, 10)

//led task
struct rt_thread led_thread;
rt_uint8_t rt_led_thread_stack[256];
void led_task_entry(void *parameter);

//ht7132 wave receive task
struct rt_thread ht7132_wave_thread;
rt_uint8_t rt_ht7132_wave_thread_stack[4096];
void ht7132_wave_task_entry(void *parameter);



void MX_RT_Thread_Init(void)
{
	rt_thread_init(&led_thread,"led",led_task_entry,RT_NULL,&rt_led_thread_stack[0],sizeof(rt_led_thread_stack),20,20);
	rt_thread_startup(&led_thread);
    
	rt_thread_init(&ht7132_wave_thread,"wave rec",ht7132_wave_task_entry,RT_NULL,&rt_ht7132_wave_thread_stack[0],sizeof(rt_ht7132_wave_thread_stack),3,20);
	rt_thread_startup(&ht7132_wave_thread);
}


void led_task_entry(void *parameter)
{
    /* set LED0 pin mode to output */	
    rt_pin_mode(LED0_PIN, PIN_MODE_OUTPUT);
    rt_pin_mode(LED1_PIN, PIN_MODE_OUTPUT);
    
    rt_pin_write(LED0_PIN, PIN_HIGH);//set led0 off
    while(1)
    {
        rt_pin_write(LED1_PIN, PIN_LOW);
        rt_thread_mdelay(100);
        rt_pin_write(LED1_PIN, PIN_HIGH);
        rt_thread_mdelay(100);
    }
}



uint8_t ht7132_WaveDataBuff[3*6];

void ht7132_init(void)
{ 

}

//ht7132 wave data receive 
void ht7132_wave_task_entry(void *parameter)
{
    ht7132_init();
    while(1)
    {
        rt_thread_mdelay(1000);
        elog_v("test","ht7132 task test");
    }
}



//void HAL_SPI_RxCpltCallback(SPI_HandleTypeDef *hspi)
//{
//	if(hspi->Instance == SPI4)
//	{
//        ;
//    }
//}

#include <rtthread.h>
#include <board.h>
#include <drv_spi.h> 

#define SPI_BUS_NAME   "spi4"      /* SPI ???? */
#define SPI_DEVICE_NAME "spi40"     /* ??? SPI ???? */
 
int rt_hw_spi_device_init(void)
{
    struct rt_spi_device *spi_device;
 
    /* ?? SPI ??,???? SPI ?? */
    spi_device = (struct rt_spi_device *)rt_device_find(SPI_BUS_NAME);
    if (!spi_device)
    {
        return -RT_ERROR;
    }
 
    /* ? SPI ?????? SPI ?? */
    rt_hw_spi_device_attach(SPI_BUS_NAME, SPI_DEVICE_NAME, GET_PIN(E, 4));
 
    return RT_EOK;
}
 
INIT_DEVICE_EXPORT(rt_hw_spi_device_init);
