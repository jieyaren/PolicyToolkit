#ifndef __PT_MUST_BE_SAME_SIZE__
#define __PT_MUST_BE_SAME_SIZE__
#include<size_of_helper.hpp>

template<typename T1, typename T2>
struct must_be_same_size{

		~must_be_same_size()
		{
			void (*p) ()= constraints;
		}
private:
		static void constraints ()
		{
			const int T1_is_not_same_size_as_T2 = size_of<T1>::value == size_of<T2>::value;
			int i[T1_is_not_same_size_as_T2];//i[0] is evil
		}
};


/* 这样得写好几个特化，不如直接封一个size_of
template<>
struct must_be_same_size<void,void>
{};*/

#endif
