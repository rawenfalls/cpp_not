#pragma once

#include <exception>

template <typename T>
class Array{
public:
    Array() :arr(new T[0]), n(0){}
    ~Array() { delete[] arr;}
    Array(const Array<T> &c) {
    	//delete[] arr;
    	n = c.n;
    	arr = new T[n];
    	for (unsigned i = 0; i < n; ++i)
    		arr[i] = c.arr[i];
    }
    Array<T> &operator=(const Array &c){
    	delete[] arr;
    	n = c.n;
    	arr = new T[n];
    	for (unsigned i = 0; i < n; ++i)
    		arr[i] = c.arr[i];
    	return *this;
    }

    Array(unsigned n) : arr(new T[n]), n(n) {}

	class OutOfrange : public std::exception{
    	const char *what() const throw(){
    		return "Out of Range!!\n";
    	}
    };

    T &operator[](unsigned idx){
    	if (idx < 0 || idx >= n)
    		throw OutOfrange();
    	return arr[idx];
    }

    const T &operator[](unsigned idx) const{
    	if (idx < 0 || idx >= n)
    		throw OutOfrange();
    	return arr[idx];
    }

    unsigned size() const{
    	return n;
    }

private:
	T *arr;
    unsigned n;
};