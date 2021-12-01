
char* varint_encode(unsigned long long, char*, int, unsigned char*);
unsigned long long varint_decode(char*, int, unsigned char*);
int varint_encoding_length(unsigned long long);
