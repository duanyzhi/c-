#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance_ = nullptr;

Singleton::Singleton()
{
	cout<<"Singleton()"<<endl;
}

// getInstance的实现
Singleton* Singleton::getInstance()  // 获取实例
{
	if (instance_ == 0)
	{
		instance_ = new Singleton();
	}
	
	return instance_;
}
