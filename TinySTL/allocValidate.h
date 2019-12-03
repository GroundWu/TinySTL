#ifndef _ALLOC_VALID_H_
#define _ALLOC_VALID_H_

#include "Alloc.h"
#include <iostream>

namespace TinySTL {
	namespace AllocValid {
		union obj{
			union obj* next;
			char client[1];
		};
	
		void testUnionObj()
		{
			obj o;
			char data[1];
			std::cout << sizeof(o) << std::endl;
			std::cout << sizeof(data[0]) << std::endl;
		}
	}
}

#endif