#include "led_driver.h"
#include "serial_driver.h"
#include "audio_player.h"
#include "audio_recorder.h"
#include "button_driver.h"
#include "flash_driver.h"
#include "lcd_driver.h"


//#include "systick.h"


int main(void)
{
	//delay_config();
	//led_config();
	//serial_debug_config();

	//systick_ms_setup();
	//i2c1_setup();

	//serial_put_s("Starting program\r\n");
	uint32_t timer_freq = 0;


	//timer_config();
	//dac_config();
	codec_init();

	while (1)
	{

		//led_ring(50, LED_RIGTH);

		//led_heart_beat(500);

		//serial_put_s("toto\r\n");
	}
	return 0;
}
