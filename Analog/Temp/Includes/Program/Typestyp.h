/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1773140981_3_
#define _BUR_1773140981_3_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef enum SensorsType
{	Pressure,
	Temp,
	Angle
} SensorsType;

typedef enum SignalType
{	voltage0_10,
	milliamps0_20,
	milliamps4_20
} SignalType;

typedef struct Configuration
{	float LSV;
	float HSV;
	enum SensorsType SensorType;
	enum SignalType Signal;
} Configuration;






__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Program/Types.typ\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */

__asm__(".previous");


#endif /* _BUR_1773140981_3_ */

