#include "stm32f10xh"   // Device header
#include "Delay.h"
#include "OLED.h"

int main(void)
{

	OLED_Init();		
	
	//OLED_ShowNum(2, 1, 12345, 5);
	
	//OLED_ShowSignedNum(2, 7, -66, 2);
	
	//OLED_ShowHexNum(3, 1, 0xAA55, 4);
	
	//OLED_ShowBinNum(4, 6, 0b6, 3);
	
	//OLED_ShowBinNum(4, 1, 0xAA55, 16);
	
	OLED_ShowString(1, 1, "HaJiV is bendan");
	
	Delay_ms(1000);

	OLED_Clear();
	
	while (1)
	{
	
	}
}
