#include <node_api.h>
#include <napi-macros.h>
#include <varint.h>

NAPI_METHOD(decode) {
  NAPI_ARGV(1)
  NAPI_ARGV_BUFFER(buffer, 0)

  unsigned char* read;
  unsigned long long tag = varint_decode(buffer, 15, read);

  NAPI_RETURN_UINT32(tag)
}

NAPI_INIT() {
  NAPI_EXPORT_FUNCTION(decode)
}
