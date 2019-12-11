#ifndef __LIST_VALIDATE_H_
#define __LIST_VALIDATE_H_


#include "./List.h"
#include<string>
#include<iostream>
namespace TinySTL {
	namespace ListValidate {
		void test() {
			TinySTL::list<std::string> l;
			
			l.push_back("1");
			l.push_back("2");
			l.push_back("3");
			auto head = l.begin();
			auto tail = l.end();
			std::cout << *head << std::endl;
			std::cout << *(--tail) << std::endl;
			l.erase(head, tail);
			std::cout << l.size() << std::endl;
			
		}

		void test_std_begin_end()
		{
			std::string str_arr[] = { "1","2","3" };
			std::cout << *(std::begin(str_arr)) << std::endl;
			std::cout << *(std::end(str_arr)-1) << std::endl;
		}
	}
}


#endif // !__LIST_VALIDATE_H_