#include <os_internal.h>
#include "controller.h"
#include "constants.h"

s32 osEepromProbe(OSMesgQueue* mq)
{
	FILE* f = fopen("C:\\Users\\Zak\\Documents\\GitProjects\\perfect_dark\\eeprom.sav", "r");
	
	if (f == NULL)
	{
		f = fopen("C:\\Users\\Zak\\Documents\\GitProjects\\perfect_dark\\eeprom.sav", "w");

		u8 byte16k[16384] = { 0 };

		fwrite(byte16k, 1, 16384, f);
	}

	fclose(f);

	return EEPROM_TYPE_16K;
}

s32 osEepromLongRead(OSMesgQueue *mq, u8 address, u8 *buffer, int length)
{
	FILE* f = fopen("C:\\Users\\Zak\\Documents\\GitProjects\\perfect_dark\\eeprom.sav", "r");

	fseek(f, address, SEEK_SET);

	fread(buffer, 1, length, f);

	fclose(f);

	return PAK_ERR1_OK;
}

s32 osEepromLongWrite(OSMesgQueue* mq, u8 address, u8* buffer, int length)
{
	FILE* f = fopen("C:\\Users\\Zak\\Documents\\GitProjects\\perfect_dark\\eeprom.sav", "r+");

	fseek(f, address, SEEK_SET);

	fwrite(buffer, 1, length, f);

	fclose(f);

	return PAK_ERR1_OK;
}