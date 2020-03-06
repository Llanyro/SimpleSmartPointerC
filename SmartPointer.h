#pragma once
#ifndef SMART_POINTER_CPP_H_
#define SMART_POINTER_CPP_H_

namespace myDLIB
{
	// Only con operator new
	template<class T>
	class SmartPointer
	{
		protected:
			T* item;
		public:
			// Inicializar con new
			inline SmartPointer(T* item) { this->item = item; }
			inline ~SmartPointer() { delete this->item; }
			inline T* operator->(){ return this->item; }
	};
	// Only con operator new[]
	template<class T>
	class SmartPointerVector
	{
		protected:
			T* item;
		public:
			// Inicializar con new[]
			inline SmartPointerVector(T* item) { this->item = item; }
			inline ~SmartPointerVector() { delete[] this->item; }
			inline T& operator[](const size_t& poscicion) { return this->item[poscicion]; }
	};
}
#endif // !SMART_POINTER_CPP_H_
