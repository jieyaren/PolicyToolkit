#ifndef __PT_MAST_HAVE_BASE__
#define __PT_MAST_HAVE_BASE__

template<typename D, typename B>
struct must_have_base
{
	~must_have_base()
	{
		void(*p)(D*,B*) = constraints;
	}
private:
	static void constraints(D*pd,B*pb)
	{
		pb = pd;
	}
}

#endif
