#include <iostream>

/************************
 * Implement without CRTP
 * **********************/

class NormalInterface
{
	public:
		virtual void count(uint64_t  n) = 0;
		virtual uint64_t getValue() = 0;
};

class NormalImplemented : public NormalInterface
{
	public:
		NormalImplemented() : couter(0)
		{

		}

		virtual void count(uint64_t n)
		{
			counter += n;
		}
		
		virtual uint64_t getValue()
		{
			return counter;
		}

	private:
		uint64_t counter;
};

void runNormal(NormalInterface *obj)
{
	const unsigned N = 40000;
	for( unsigned i = 0; i < N; i++)
	{
		for(unsigned j = 0; j< N; j++)
		{
			obj->count(j);
		}
	}

	obj->getValue();
}


/*************************
 * Now Implement with CRTP
 * ***********************/

template <typename Derived>
class CRTPinterface
{
	void count(uint64_t n)
	{
		static_cast<Derived*>(this)->count(n);
		// virtual function not used here
	}

	uint64_t GetValue()
	{
		return static_cast<Derived*>(this)->getValue();
	}
};

class CRTPimplemented : public CRTPinterface
{
	public:
		CRTPimplemented() : counter(0)
		{

		}

		void count(uint64_t n)
		{
			counter += n;
		}

		uint64_t getValue()
		{
			return counter;
		}

	private:
		uint64_t counter;
};


template <typename T>
void RunCRTP(CRTPinterface<T> *obj)
{
	const unsigned N = 40000;
	for(unsigned i =0; i< N ; i++)
	{
		for (unsigned j = 0; j < i; j++)
		{
			obj->count(j);
		}
	}
	IC(obj->GetValue());
}
