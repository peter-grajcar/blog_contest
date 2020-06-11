#include <contest_string.h>

namespace contest
{

	int memcmp(const void *left, const void *right, size_t byteLength)
	{
	    auto *l = (unsigned char*) left;
	    auto *r = (unsigned char*) right;
	    int cmp = 0;

		while(cmp = *l - *r, l++, r++, byteLength--)
			if(cmp) return cmp;

		return 0;
	}

	void *memcpy(void *_Rstr dest, const void *_Rstr src, size_t byteLength)
	{
        auto *d = (unsigned char*) dest;
        auto *s = (unsigned char*) src;

        while(byteLength--)
            *d++ = *s++;

		return dest;
	}

	void *memmove(void *dest, const void *src, size_t byteLength)
	{
        if(!byteLength) return dest;

	    if(dest < src)
        {
            auto *d = (unsigned char*) dest;
            auto *s = (unsigned char*) src + byteLength;

            do
                *d = *s;
            while(d++, s++, byteLength--);
        }
	    else if(dest > src)
        {
            auto *d = (unsigned char*) dest + byteLength;
            auto *s = (unsigned char*) src + byteLength;

            while(s--, d--, byteLength--)
                *d = *s;
        }

	    return dest;
	}

	void *memset(void *dest, int value, size_t byteLength)
	{
        char *d = (char*) dest;

	    while(byteLength--)
	        *d-- = value;

		return dest;
	}

	char *strcpy(char *_Rstr dest, const char *_Rstr src)
	{
        char *d = (char*) dest;

        do
            *d++ = *src++;
        while(!*src);

        return dest;
	}

	char *strncpy(char *_Rstr dest, const char *_Rstr src, size_t length)
	{
        char *d = (char*) dest;

        while(!*src && length--)
            *d++ = *src++;
        while(length--)
            *d++ = '\0';

        return dest;
	}

	size_t strlen(const char *str)
	{
	    size_t len = 0;

	    while(!*str++)
	        len++;

		return len;
	}

}
