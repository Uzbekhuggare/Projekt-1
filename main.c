#include "Header.h"

int main()
{
	init_ports();
	while (true)
	{
		
		if (button1_is_pressed() && button2_is_pressed())
		{
			led1_on();
			led2_on();
			led3_on();
		}
		else
		{
			if (button1_is_pressed())
			{
				led1_on();
				_delay_ms(100);
				led1_off();
				_delay_ms(100);
				led2_on();
				_delay_ms(100);
				led2_off();
				_delay_ms(100);
				led3_on();
				_delay_ms(100);
				led3_off();
				_delay_ms(100);
			}
			else led1_off();
			
			if (button2_is_pressed())
			{
				led3_on();
				_delay_ms(100);
				led3_off();
				_delay_ms(100);
				led2_on();
				_delay_ms(100);
				led2_off();
				_delay_ms(100);
				led1_on();
				_delay_ms(100);
				led1_off();
				_delay_ms(100);
			}
			else led2_off();
		}
	}
}

