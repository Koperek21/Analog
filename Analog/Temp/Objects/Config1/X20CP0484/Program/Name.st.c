#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Namest.h"
#line 1 "C:/Praktyki/Analog/Analog/Logical/Program/Name.nodebug"
#line 3 "C:/Praktyki/Analog/Analog/Logical/Program/Name.st"
void Name(struct Name* inst){struct Name* __inst__=inst;{


(__inst__->AnalogOUT=Scale(__inst__->Config.LSV,Normalize(0,__inst__->RAW,32768),__inst__->Config.HSV));
(__inst__->AnalogOUT=((float)(signed short)((__inst__->AnalogOUT*100)>=0.0?(__inst__->AnalogOUT*100)+0.5:(__inst__->AnalogOUT*100)-0.5)/100));


(__inst__->AnalogOut10=(signed short)((__inst__->AnalogOUT*10)>=0.0?(__inst__->AnalogOUT*10)+0.5:(__inst__->AnalogOUT*10)-0.5));
(__inst__->AnalogOut100=(signed short)((__inst__->AnalogOUT*100)>=0.0?(__inst__->AnalogOUT*100)+0.5:(__inst__->AnalogOUT*100)-0.5));
switch(__inst__->Config.Signal){
case 0:{
(__inst__->AnalogOutSignal=((float)(signed short)((Scale(0,__inst__->RAW,32768)*10)>=0.0?(Scale(0,__inst__->RAW,32768)*10)+0.5:(Scale(0,__inst__->RAW,32768)*10)-0.5)/100));
}break;case 1:{
(__inst__->AnalogOutSignal=((float)(signed short)((Scale(0,__inst__->RAW,32768)*20)>=0.0?(Scale(0,__inst__->RAW,32768)*20)+0.5:(Scale(0,__inst__->RAW,32768)*20)-0.5)/100));
}break;case 2:{
(__inst__->AnalogOutSignal=((float)(signed short)((Scale(4,__inst__->RAW,32768)*20)>=0.0?(Scale(4,__inst__->RAW,32768)*20)+0.5:(Scale(4,__inst__->RAW,32768)*20)-0.5)/100));

}break;}

}imp1_case0_2:imp1_endcase0_0:;}
#line 22 "C:/Praktyki/Analog/Analog/Logical/Program/Name.nodebug"

void __AS__ImplInitName_st(void){}

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
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/Name.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfub \\\"Name\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Scale\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Normalize\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"INTx10\\\"\\n\"");
__asm__(".previous");

__asm__(".section \".plciec\"");
__asm__(".ascii \"plcdata_type 'SignalType'\\n\"");
__asm__(".ascii \"plcdata_type 'Configuration'\\n\"");
__asm__(".previous");
