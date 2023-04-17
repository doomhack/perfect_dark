#include "lib/rzip.h"
#include "zlib/zlib.h"

s32 rzipInflate(void *src, void *dst, void *scratch)
{
    u32 dstLen = 512 * 1024;

    u8* srcByte = src;

    //1173, then 3 bytes size uncompressed, then data
    if (rzipIs1173(src))
    {
        dstLen = ((u32)srcByte[2] << 16) | ((u32)srcByte[3] << 8) | srcByte[4];

        src = &srcByte[5];
    }

    z_stream stream;
    memset(&stream, 0, sizeof(z_stream));

    stream.next_in = src;
    stream.avail_in = dstLen;

    stream.next_out = dst;
    stream.avail_out = dstLen;

    inflateInit2(&stream, -15);

    int ret = inflate(&stream, Z_SYNC_FLUSH);

    inflateEnd(&stream);

    if(ret == Z_STREAM_END || ret == Z_OK)
        return stream.total_out;

    return 0;
}

u32 rzipInit(void)
{
    return 0;
}

bool rzipIs1173(void *buffer)
{
    u8* srcByte = buffer;

    if (srcByte[0] == 0x11 && srcByte[1] == 0x73)
        return true;

    return false;
}

void *rzipGetSomething(void)
{
    return NULL;
}

