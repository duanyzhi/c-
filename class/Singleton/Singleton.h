#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>

using namespace std;

class Singleton
{
	public:
		static Singleton* getInstance();
		
	private:
	    Singleton();  // 构造函数要被保护，防止new新建
		static Singleton* instance_;
	
};

#endif //~_SINGLETON_H_


