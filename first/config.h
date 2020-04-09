#ifndef CONFIG_H
#define CONFIG_H

#include "AllLib.h"

typedef signed char             int8_t;
typedef short int               int16_t;
typedef int                     int32_t;

typedef unsigned char           uint8_t;
typedef unsigned short int      uint16_t;
typedef unsigned int            uint32_t;

typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;

/* bit of system  16or 32or 64
硬件是32位或16位
 */
#define SYSTEM 32

#if(SYSTEM==8)
typedef u8 SYSTEMbit;
#elif(SYSTEM==16)
typedef u16 SYSTEMbit;
#elif(SYSTEM==32)
typedef u32 SYSTEMbit;
#endif



#endif // THREAD_H
