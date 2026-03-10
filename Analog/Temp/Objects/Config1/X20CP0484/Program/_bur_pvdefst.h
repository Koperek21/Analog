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
