#ifndef __PT_MUST_BE_POD__
#define __PT_MUST_BE_POD__

template<typename T>
struct must_be_pod{
	
	~must_be_pod()
	{
		void (*p) = constraints;
	}
private:
	static void constraints()
	{
		union{
			T T_is_not_POD_types;
		};
	}

};

#endif
