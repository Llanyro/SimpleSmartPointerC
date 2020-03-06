#pragma once
#ifndef SMART_POINTER_CPP_H_
#define SMART_POINTER_CPP_H_
#include <cstdlib>

namespace myDLIB
{
	// Only con funcion malloc
	template<class T>
	class SmartPointerC
	{
		protected:
			T* item;
		public:
			// Inicializar con malloc
			inline SmartPointerC(T* item) { this->item = item; }
			inline ~SmartPointerC() { free(this->item); }
			inline T* operator->() { return this->item; }
	};
}
#endif // !SMART_POINTER_CPP_H_
