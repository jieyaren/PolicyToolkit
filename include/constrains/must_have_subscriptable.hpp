#ifndef __PT_MUST_HAVE_OPERATOR_AT__
#define __PT_MUST_HAVE_OPERATOR_AT__

template<typename T>
struct must_be_subscriptable
{
	~must_be_subscriptable()
	{
		void (*p)(T const&)	= constraints;
	}

private:
	sdtatic void constraints(T const& T_is_not_subsciptable)
	{
		sizeof(T_is_not_subsciptable[0]);
	}
};

#endif
