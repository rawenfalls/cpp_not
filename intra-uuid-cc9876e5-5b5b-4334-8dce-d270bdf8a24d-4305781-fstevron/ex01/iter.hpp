#pragma once

template <typename T>

void iter(T *arr, int size, void (*func)(T &)){
	for (int i = 0; i < size; ++i)
		func(arr[i]);
}

template <typename T>

void increment(T &t){
	t++;
}


