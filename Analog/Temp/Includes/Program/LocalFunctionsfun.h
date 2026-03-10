/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _BUR_1773140981_5_
#define _BUR_1773140981_5_

#include <bur/plctypes.h>

/* Datatypes and datatypes of function blocks */
typedef struct Name
{
	/* VAR_INPUT (analog) */
	signed short RAW;
	struct Configuration Config;
	float HSV;
	/* VAR_OUTPUT (analog) */
	float AnalogOUT;
	signed short AnalogOut10;
	signed short AnalogOut100;
	float AnalogOutSignal;
} Name_typ;



/* Prototyping of functions and function blocks */
void Name(struct Name* inst);
float Scale(float Minimum, float Value, float Maximum);
float Normalize(float Minimum, float Value, float Maximum);
signed short INTx10(void);


__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Program/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");

/* Exported library functions and function blocks */
#ifdef _PROGRAM_EXPORT
	__asm__(".ascii \"plcexport \\\"Name\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"Scale\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"Normalize\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INTx10\\\" FUN\\n\"");
#endif

__asm__(".previous");


#endif /* _BUR_1773140981_5_ */

