/******************************************************************
 * @file HgmBT.h
 * @author Hotakus (...)
 * @email ttowfive@gmail.com
 * @brief ...
 * @version 1.0
 * @date 2021/8/13 5:07
 * @copyright Copyright (c) 2021/8/13
*******************************************************************/
#ifndef HELLGATEMONITOR_HGMBT_H
#define HELLGATEMONITOR_HGMBT_H
#include <ArduinoJson.h>
#include <BluetoothSerial.h>

namespace HgmApplication {
#define BT_DEFAULT_NAME "HellGateMonitorBT"
#define BT_PACK_HEADER "Hgm"
	typedef enum HgmBTPackMethod
	{
		// Received method
		HGM_BT_PACK_METHOD_WIFI_CONF,

		// Send method
		HGM_BT_PACK_METHOD_OK,
		HGM_BT_PACK_METHOD_NORMAL,

		HGM_BT_PACK_METHOD_NULL,
	};

	class HgmBT
	{
	private:

		void BluetoothTaskInit();
		void BluetoothTaskDelete();
		/* Pack the raw data as a data frame via designated method */
		static String PackRawData(String& dataToPack, HgmBTPackMethod method);

	public:
		BluetoothSerial *bs = nullptr;

		HgmBT(char* name = BT_DEFAULT_NAME);
		~HgmBT();

		void Begin();
		void Stop();
		
		/* To send data pack, used by another Hgm App */
		static void SendDatePack(String& rawData, HgmBTPackMethod method);
		static void ReceiveDataPack(String& dataToSave, HgmBTPackMethod *method);
	};
};

#ifdef __cplusplus
extern "C" {
#endif

/*...*/

#ifdef __cplusplus
}
#endif // __cplusplus

#endif //HELLGATEMONITOR_HGMBT_H