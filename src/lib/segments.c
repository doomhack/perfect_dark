#include "lib/segments.h"
#include "inflate/inflate.h"


void segInflate(void *src, void *dst, void *scratch)
{
    inflate1173(src, dst, scratch);
}
