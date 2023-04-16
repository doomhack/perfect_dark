//Map of addresses in ROM

#include <versions.h>

#if VERSION == VERSION_NTSC_FINAL
	#include "symbols_ntsc.h"
#elif VERSION == VERSION_PAL_FINAL
	#include "symbols_pal.h"
#endif