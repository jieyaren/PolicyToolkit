#ifndef __PT_MUST_HAVE_OPERATOR_AT__
#define __PT_MUST_HAVE_OPERATOR_AT__

template<typename T>
struct must_be_subscriptable_as_decayable_pointer
{
	~must_be_subscriptable_as_decayable_pointer()
	{
		void (*p)(T const&)	= constraints;
	}

private:
	sdtatic void constraints(T const& T_is_not_subsciptable_as_decayable_pointer)
	{

		sizeof(0[T_is_not_subsciptable_as_decayable_pointer]);

	}
};

#endif
