///******************************************************************
// * @file HellGateMonitor.ino
// * @author Hotakus (...)
// * @email ttowfive@gmail.com
// * @brief ...
// * @version 1.0
// * @date 2021/8/11 20:19
// * @copyright Copyright (c) 2021/8/11
//*******************************************************************/
//#include <Arduino.h>
//#include <TFT_eSPI.h>
//#include <User_Setup.h>
//#include <User_Setup_Select.h>
//#include <I2C_MPU6886.h>
//
///* User include files */
//#include "Source/HgmLvgl/HgmLvgl.h"
//
//
//using namespace HGM;
//
//extern HgmLvgl* hgmLvgl;
//
//
//#define COMPILE_DATE __DATE__
//#define COMPILE_TIME __TIME__
//
//
//void setup()
//{
//	/* Base init */
//	Serial.begin(115200);
//	Wire1.begin(21, 22);
//
//	Serial.println("Hello HGM!!!");
//
//	/* Hgm LVGL init */
//	hgmLvgl->HgmLvglBegin();
//}
//
//void loop()
//{
//	Serial.printf("Temp: %f\n", hgmLvgl->hcl->GetTemperature());
//	vTaskDelay(1000);		// use FreeRTOS
//}




#define COMPILE_DATE __DATE__
#define COMPILE_TIME __TIME__

void setup()
{
	Serial.begin(115200);
	Serial.printf("Hello HGM!!! %s %s\n", COMPILE_DATE, COMPILE_TIME);
}

void loop()
{
}

