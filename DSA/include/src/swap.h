#pragma once


namespace DSA
{

template <typename T>
inline void swap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}

}
