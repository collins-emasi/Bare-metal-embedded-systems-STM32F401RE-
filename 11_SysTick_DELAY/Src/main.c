#include <stdio.h>
#include "stm32f4xx.h"
#include "uart.h"
#include "adc.h"
#include "systick.h"

uint32_t sensor_value;

int main(void) {
	uart2_rxtx_init();
	pa1_adc_init();
	start_conversion();

	while (1) {
		sensor_value = adc_read();
		printf("Sensor value: %lu\n\r", sensor_value);
		systickDelayMs(1000);
	}
}


