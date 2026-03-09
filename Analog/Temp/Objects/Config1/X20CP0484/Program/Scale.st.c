#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Scalest.h"
#line 1 "C:/Praktyki/Analog/Analog/Logical/Program/Scale.nodebug"
#line 3 "C:/Praktyki/Analog/Analog/Logical/Program/Scale.st"
float Scale(float Minimum, float Value, float Maximum){float __AS__Scale=(0.00000000000000000000E+00);{
(__AS__Scale=((Value*(Maximum-Minimum))+Minimum));
}return __AS__Scale;}
#line 5 "C:/Praktyki/Analog/Analog/Logical/Program/Scale.nodebug"

void __AS__ImplInitScale_st(void){}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Scale.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfub \\\"Name\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Scale\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Normalize\\\"\\n\"");
__asm__(".previous");
