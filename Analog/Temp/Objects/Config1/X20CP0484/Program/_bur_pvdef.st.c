#define _BUR_LOCAL _BUR_PUBLIC __attribute__((__section__(".bss.vol")))
#define _BUR_LOCAL_RETAIN _BUR_PUBLIC __attribute__((__section__(".bss.rem")))
#ifndef _DEFAULT_INCLUDES
#define _DEFAULT_INCLUDES
#endif
#include <bur\plctypes.h>
#include "C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/_bur_pvdefst.h"
#line 9 "C:/Program Files (x86)/BRAutomation/AS6/AS/gnuinst/V11.3.0/6.3/i686-elf/include/bur/_bur_pvdef.nodebug"
void __AS__ImplInitMain_st(void);
void __AS__ImplInitName_st(void);
void __AS__ImplInitScale_st(void);
void __AS__ImplInitNormalize_st(void);
void _INIT __BUR__ENTRY_INIT_BRELF_FUNCT__(void){__AS__ImplInitMain_st();
__AS__ImplInitName_st();
__AS__ImplInitScale_st();
__AS__ImplInitNormalize_st();
}

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
__asm__(".ascii \"iecfile \\\"C:/Praktyki/Analog/Analog/Temp/Objects/Config1/X20CP0484/Program/_bur_pvdef.st.var\\\" scope \\\"local\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfub \\\"Name\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Scale\\\"\\n\"");
__asm__(".ascii \"plc_iec_localfun \\\"Normalize\\\"\\n\"");
__asm__(".previous");
