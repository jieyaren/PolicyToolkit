#ifndef __PT_SIZE_OF_HACK__
#define __PT_SIZE_OF_HACK__

template<typename T>
struct size_of{
	enum {value = sizeof(T)};
};

template<>
struct sizeof<void> {
	enum{value = 0};
};

#endif
