#ifndef __PT_MUST_BE_POD_OR_VOID__
#define __PT_MUST_BE_POD_OR_VOID__

template<typename T>
struct must_be_pod_or_void{
	
	~must_be_pod_or_void()
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

template<>
struct must_be_pod_or_void<void> 
{};

#endif
