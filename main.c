/*
 * main.c
 *
 *  Created on: Apr 5, 2024
 *      Author: Toa Fekry
 */




#include "MCAL/DIO/Header/DIO_Interface.h"
#include "HAL/LED/Header/Led_Interface.h"
#include "MCAL/TimerZero/Header/Timer_Interface.h"
#include "MCAL/TimerOne/Header/TimeOne_Interface.h"



void main()
{
	Timer1_Init();

	DIO_SetDirectionForPin(DIO_GroupD,DIO_Pin5,DIO_Output);


	while(1)
	{
		Servo_Motor(1500);
	}
}













/*
void main()
{
	CompareMatch_PWMInit();

	while(1)
	{
		Timer0_UpdateDutycycle();
	}

}*/



/*void Action();
void main()
{

   Enable Global Interrupt
    GIE_Enable();
    Call Back FN
	Timer_CallBack(Action);
	Timer0 NormalMode
	Timer0_Init();
   LED Intailizing
//	Led_Init(DIO_GroupC,Led6);
	DIO_SetDirectionForPin(DIO_GroupC,DIO_Pin0,1);
	DIO_SetOutputForPin(DIO_GroupC,DIO_Pin0,DIO_High);

	while(1);
}

void Action()
{
	static u8 ledFlag=DIO_High;
	if(ledFlag==DIO_High)
	{
		DIO_SetOutputForPin(DIO_GroupC,DIO_Pin0,DIO_Low);
		ledFlag=DIO_Low;
	}
	else if (ledFlag==DIO_Low)
	{
		DIO_SetOutputForPin(DIO_GroupC,DIO_Pin0,DIO_High);
		ledFlag=DIO_High;

	}


}*/











