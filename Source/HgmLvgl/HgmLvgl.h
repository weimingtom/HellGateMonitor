/******************************************************************
 * @file HgmLvgl.h
 * @author Hotakus (...)
 * @email ttowfive@gmail.com
 * @brief ...
 * @version 1.0
 * @date 2021/8/10 11:21
 * @copyright Copyright (c) 2021/8/10
*******************************************************************/
#ifndef HELLGATEMONITOR_HGMLVGL_H
#define HELLGATEMONITOR_HGMLVGL_H

#include <TFT_eSPI.h>
#include "../LvglSrc/lvgl/lvgl.h"
#include "../HgmControl/HgmControlLogic.h"
#include "HgmGUI/HgmFramework.h"

namespace HGM {
#define HGM_MONITOR_WIDTH  240
#define HGM_MONITOR_HEIGHT 135

	class HgmLvgl
	{
	private:
		/*  */
		int16_t _width = 0;
		int16_t _height = 0;

		xTaskHandle hgmControlHandle;

		xTaskHandle hgmLvglTaskHandle;
		xTaskHandle hgmLvglTickHandle;
		int16_t lvTick = 5;

		void HgmLvglDispInit();
		void HgmLvglIndevInit();
		void HgmLvglFsInit();


		static void HgmLvglTask(void* params);
		static void HgmLvglTick(void* params);
		static void HgmControlCheckTask(void* params);

	public:
		TFT_eSPI* lcd;
		HgmControlLogic *hcl = nullptr;
		HgmGUI::HgmFramework *hgmFw = nullptr;

		HgmLvgl(int16_t width = HGM_MONITOR_WIDTH, int16_t height = HGM_MONITOR_HEIGHT);
		~HgmLvgl();

		void HgmLvglBegin();
		void HgmLvglUIBegin();

		static void HgmLvglDispFlush(lv_disp_drv_t* disp_drv, const lv_area_t* area, lv_color_t* color_p);

	};
};



#ifdef __cplusplus
extern "C" {
#endif

	/*...*/
	

#ifdef __cplusplus
}
#endif // __cplusplus

#endif // !HELLGATEMONITOR_HGMLVGL_H
