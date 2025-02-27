#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "list.h"

template <typename T>
void CP::list<T>::block_swap(iterator a1, iterator a2, iterator b1, iterator b2) {
	// write your code here

	a1.ptr->prev->next = b1.ptr; //
	b1.ptr->prev = a1.ptr->prev; //

	b2.ptr->prev->next = a2.ptr; //
	a2.ptr->prev = b2.ptr->prev; // 

	a1.ptr->prev = a2.ptr->next; //
	a2.ptr->next->next = a1.ptr; //

	a1.ptr->next = b2.ptr;
	b2.ptr->prev = a1.ptr;

}

#endif
