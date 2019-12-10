#ifndef __LIST_VALIDATE_H_
#define __LIST_VALIDATE_H_


#include "./List.h"
#include<string>
#include<iostream>
namespace TinySTL {
	namespace ListValidate {
		void test() {
			TinySTL::list<std::string> l;
			auto head  = l.begin();
			auto tail = l.end();
			l.push_back("1");
			std::cout << *head << std::endl;
			std::cout << *tail << std::endl;
		}
	}
}


#endif // !__LIST_VALIDATE_H_