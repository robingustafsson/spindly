#ifndef SPDY_HEADERS_H_
#define SPDY_HEADERS_H_

#include "spdy_data.h"
#include "spdy_zlib.h"
#include "spdy_nv_block.h"

struct hash;

typedef struct
{
  uint16_t stream_id;
  spdy_nv_block *nv_block;
} spdy_headers;

int spdy_headers_parse(spdy_headers *headers, struct hash *hash,
                       spdy_data *data,
                       uint32_t frame_length);

#endif
