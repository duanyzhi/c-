c++ code 一般将不同功能的代码区分开来。  
.h文件中表示头文件的定义  
implement.cpp文件存储每个头文件的实现方法。  
main.cpp里是对函数的调用和运行。  
最好不要混淆，比如把定义和实现都放在头文件里是不太好的。  

这个例子包含了多个print文件的定义，虽然函数名字相同，但是在调用时程序会根据输入数据的类型自动判断调用哪个函数。  
第二点在CMakeList.txt里定义了如何使用-std=c++11和如何同时编译多个.cpp文件。编译时每个.cpp文件都要进行编译的，所以都必须加上。
