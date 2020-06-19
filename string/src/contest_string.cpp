#include <contest_string.h>

namespace contest
{

    int memcmp(const void *left, const void *right, size_t byteLength)
    {
        auto *l = static_cast<const unsigned char *>(left);
        auto *r = static_cast<const unsigned char *>(right);
        int cmp = 0;

        if(!byteLength) return cmp;
        while (cmp = *l - *r, l++, r++, --byteLength)
            if (cmp) return cmp;

        return cmp;
    }

    void *memcpy(void* _Rstr dest, const void* _Rstr src, size_t byteLength)
    {
        auto *d = static_cast<unsigned char *>(dest);
        auto *s = static_cast<const unsigned char *>(src);

        while (byteLength--)
            *d++ = *s++;

        return dest;
    }

    void *memmove(void *dest, const void *src, size_t byteLength)
    {
        if (!byteLength) return dest;

        if (dest < src) {
            auto * d = static_cast<unsigned char *>(dest);
            auto * s = static_cast<const unsigned char *>(src);

            while (byteLength--)
                *d++ = *s++;
        } else if (dest > src) {
            auto *d = static_cast<unsigned char *>(dest) + byteLength;
            auto *s = static_cast<const unsigned char *>(src) + byteLength;

            while (s--, d--, byteLength--)
                *d = *s;
        }

        return dest;
    }

    void *memset(void *dest, int value, size_t byteLength)
    {
        auto *d = static_cast<unsigned char *>(dest);

        while (byteLength--)
            *d++ = value;

        return dest;
    }

    char *strcpy(char *_Rstr dest, const char *_Rstr src)
    {
        char *d = dest;

        do
            *d = *src;
        while (d++, *src++);

        return dest;
    }

    char *strncpy(char *_Rstr dest, const char *_Rstr src, size_t length)
    {
        char *d = dest;

        while (length--) {
            *d++ = *src++;
            if(!*src) break;
        }
        while (length--)
            *d++ = '\0';

        return dest;
    }

    size_t strlen(const char *str)
    {
        size_t len = 0;

        while (*str++)
            len++;

        return len;
    }

}
