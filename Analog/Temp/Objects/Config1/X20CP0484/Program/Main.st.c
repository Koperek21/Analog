#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Mainst.h"
#line 1 "C:/Praktyki/Analog/Analog/Logical/Program/Main.nodebug"
#line 2 "C:/Praktyki/Analog/Analog/Logical/Program/Main.st"
void __BUR__ENTRY_INIT_FUNCT__(void){{

(analog1Config.HSV=20);
(analog1Config.LSV=0);
(analog1Config.SensorType=0);
(analog1Config.Signal=0);
}}
#line 8 "C:/Praktyki/Analog/Analog/Logical/Program/Main.nodebug"
#line 10 "C:/Praktyki/Analog/Analog/Logical/Program/Main.st"
void _CYCLIC __BUR__ENTRY_CYCLIC_FUNCT__(void){{

(fb_Analog.RAW=auxTest);;(fb_Analog.Config=*(struct Configuration*)&analog1Config);;Name(&fb_Analog);
(analog=fb_Analog.AnalogOUT);




(fb_Analog_2.Config.HSV=100);
(fb_Analog_2.RAW=auxTest);
(fb_Analog_2.Config.LSV=0);
Name(&fb_Analog_2);
(analog_2=fb_Analog_2.AnalogOUT);



}}
#line 26 "C:/Praktyki/Analog/Analog/Logical/Program/Main.nodebug"
#line 28 "C:/Praktyki/Analog/Analog/Logical/Program/Main.st"
void _EXIT __BUR__ENTRY_EXIT_FUNCT__(void){{


}}
#line 31 "C:/Praktyki/Analog/Analog/Logical/Program/Main.nodebug"

void __AS__ImplInitMain_st(void){__BUR__ENTRY_INIT_FUNCT__();}

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
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Main.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfub \\\"Name\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Scale\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Normalize\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"INTx10\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_type 'SensorsType'\\n\"");
__asm__(".ascii \"plcdata_type 'SignalType'\\n\"");
__asm__(".previous");
