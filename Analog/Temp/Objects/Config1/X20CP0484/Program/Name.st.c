#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Namest.h"
#line 1 "C:/Praktyki/Analog/Analog/Logical/Program/Name.nodebug"
#line 3 "C:/Praktyki/Analog/Analog/Logical/Program/Name.st"
void Name(struct Name* inst){struct Name* __inst__=inst;{


(__inst__->procent=Normalize(0,__inst__->RAW,32768));
(__inst__->AnalogOUT=Scale(__inst__->LSV,__inst__->procent,__inst__->HSV));




}}
#line 12 "C:/Praktyki/Analog/Analog/Logical/Program/Name.nodebug"

void __AS__ImplInitName_st(void){}

__asm__(".section \".plc\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Library/Types.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Library/Library.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Global.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/Library/Constants.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Types.typ\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/Variables.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Program/LocalFunctions.fun\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Name.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfub \\\"Name\\\"\\n\"");
__asm__(".previous");
