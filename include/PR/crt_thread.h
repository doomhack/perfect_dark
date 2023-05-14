#ifndef _CRT_THREAD_H_
#define	_CRT_THREAD_H_

//Soooo....it's 2023 and still no C11 thread support....
#ifndef __STDC_NO_THREADS__
	#include <threads.h>
#else
	#include "../tinycthread/tinycthread.h"
#endif

#endif

