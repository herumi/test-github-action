#include <stdio.h>

int main()
{
#ifdef _M_ARM64
	puts("_M_ARM64");
#elif defined(__aarch64__)
	puts("__aarch64__");
#else
	puts("unknown");
#endif
}
