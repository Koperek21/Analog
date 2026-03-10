#ifndef __AS__TYPE_
#define __AS__TYPE_
typedef struct {
	unsigned char bit0  : 1;
	unsigned char bit1  : 1;
	unsigned char bit2  : 1;
	unsigned char bit3  : 1;
	unsigned char bit4  : 1;
	unsigned char bit5  : 1;
	unsigned char bit6  : 1;
	unsigned char bit7  : 1;
} _1byte_bit_field_;

typedef struct {
	unsigned short bit0  : 1;
	unsigned short bit1  : 1;
	unsigned short bit2  : 1;
	unsigned short bit3  : 1;
	unsigned short bit4  : 1;
	unsigned short bit5  : 1;
	unsigned short bit6  : 1;
	unsigned short bit7  : 1;
	unsigned short bit8  : 1;
	unsigned short bit9  : 1;
	unsigned short bit10 : 1;
	unsigned short bit11 : 1;
	unsigned short bit12 : 1;
	unsigned short bit13 : 1;
	unsigned short bit14 : 1;
	unsigned short bit15 : 1;
} _2byte_bit_field_;

typedef struct {
	unsigned long bit0  : 1;
	unsigned long bit1  : 1;
	unsigned long bit2  : 1;
	unsigned long bit3  : 1;
	unsigned long bit4  : 1;
	unsigned long bit5  : 1;
	unsigned long bit6  : 1;
	unsigned long bit7  : 1;
	unsigned long bit8  : 1;
	unsigned long bit9  : 1;
	unsigned long bit10 : 1;
	unsigned long bit11 : 1;
	unsigned long bit12 : 1;
	unsigned long bit13 : 1;
	unsigned long bit14 : 1;
	unsigned long bit15 : 1;
	unsigned long bit16 : 1;
	unsigned long bit17 : 1;
	unsigned long bit18 : 1;
	unsigned long bit19 : 1;
	unsigned long bit20 : 1;
	unsigned long bit21 : 1;
	unsigned long bit22 : 1;
	unsigned long bit23 : 1;
	unsigned long bit24 : 1;
	unsigned long bit25 : 1;
	unsigned long bit26 : 1;
	unsigned long bit27 : 1;
	unsigned long bit28 : 1;
	unsigned long bit29 : 1;
	unsigned long bit30 : 1;
	unsigned long bit31 : 1;
} _4byte_bit_field_;
#endif

#ifndef __AS__TYPE_SensorsType
#define __AS__TYPE_SensorsType
typedef enum SensorsType
{	Pressure = (signed long)0,
	Temp = (signed long)1,
	Angle = (signed long)2,
} SensorsType;
#endif

#ifndef __AS__TYPE_SignalType
#define __AS__TYPE_SignalType
typedef enum SignalType
{	voltage0_10 = (signed long)0,
	milliamps0_20 = (signed long)1,
	milliamps4_20 = (signed long)2,
} SignalType;
#endif

#ifndef __AS__TYPE_Configuration
#define __AS__TYPE_Configuration
typedef struct Configuration
{	float LSV;
	float HSV;
	SensorsType SensorType;
	SignalType Signal;
} Configuration;
#endif

struct Name
{	signed short RAW;
	Configuration Config;
	float HSV;
	float AnalogOUT;
	signed short AnalogOut10;
	signed short AnalogOut100;
	float AnalogOutSignal;
};
void Name(struct Name* inst);
_BUR_LOCAL struct Name fb_Analog;
_BUR_LOCAL signed short auxTest;
_BUR_LOCAL float analog;
_BUR_LOCAL struct Name fb_Analog_2;
_BUR_LOCAL float analog_2;
_BUR_LOCAL Configuration analog1Config;
