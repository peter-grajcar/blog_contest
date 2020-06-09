//
// Created by xgallom on 6/9/20.
//

#ifndef BLOG_CONTEST_STRING_INCLUDE_CONTEST_STRING_H
#define BLOG_CONTEST_STRING_INCLUDE_CONTEST_STRING_H

#include <cstddef>
#include <cstdint>


#define _Rstr __restrict

namespace contest
{

	// Consult https://en.cppreference.com/w/cpp/header/cstring for how the functions should behave
	// Only functions required to participate in the contest are the ones here:

	int memcmp(const void *left, const void *right, size_t byteLength);
	void *memcpy(void *_Rstr dest, const void *_Rstr src, size_t byteLength);
	void *memmove(void *dest, const void *src, size_t byteLength);
	void *memset(void *dest, int value, size_t byteLength);
	char *strcpy(char *_Rstr dest, const char *_Rstr src);
	char *strncpy(char *_Rstr dest, const char *_Rstr src, size_t length);
	size_t strlen(const char *str);

}


#endif //BLOG_CONTEST_STRING_INCLUDE_CONTEST_STRING_H
