# 第3章&ensp;数据和c #
## 3.1&ensp;示例程序 #
### 示例程序在输入体重之后便会结束，解决此问题的方法是在程序的后面几行加入getchar()，要求用户键入enter才会结束程序 ###
### printf()打印浮点数时使用%f，%.2f即指定浮点数只打印小数点后两位,经过测试，省略方案为四舍五入 ###
## 3.2&ensp;变量与常量类型 ##
### 在整个程序的运行过程中没有变化的数据，被称为常量 ###
### 在整个程序的运行过程中会被改变被赋值的数据，被称为变量 ###
## 3.3&ensp;数据：数据类型关键字 ##
### 类型关键字 ###
#### int,long,short,unsigned,char,float,double,signed,void ####
### 按照计算机的储存方式可以分为两大基本类型：整数类型和浮点数类型 ###
### 计算机中最小的储存单元是位(bit)，可以储存0或者1，位是计算机内存的基本构建块 ###
### 字节是常用的计算机储存单位，一个字节通常是8bits,每个bit有0和1两种可能，因此1个字节可以表示的范围为2^8=256 ###
### 字( word)是设计计算机时给定的自然存储单位。对于8位的微型计算机（如，最初的苹果机)，l个字长只有8位。从那以后，个人计算机字长增至16位、32位，直到目前的64位。计算机的字长越大，其数据转移越快，允许的内存访问也更多。###
### 浮点数储存的时候会出现精度丢失，究其原因在于浮点数在计算机中的储存方式不一样 比如在1.0和2.0之前存在无穷多个实数，所以计算机的浮点数储存不可能表示该区间的所有值，浮点数的运行比整数慢 ###
## 3.4&ensp;c语言基本数据类型 ##
## int ##
### 使用%d打印整型变量，在使用printf()函数时要确保转换说明的数量与待打印值的数量相等，编译器不会捕获这种错误 ###
### 使用0x或者0X来标识16进制数，使用0来标识8进制数 ###
### 以8进制格式输出%o，带前缀%#o ###
### 以16进制格式输出%x或者%X，带前缀%#x,%#X ###
### int一般代表一个机器的机器字长，因此在不同机器上int所占的位数不一样，但是目前主流的机器都是32位和64位的，因此，一个int基本都是4字节 ###
### short <= int <= long <= long long ###
### 在整数常量后部加l/L表示用long来存储该常量，用ll/LL表示用long long来储存该常量 ###
### int的取值范围是 -2147483648~2147483647 在编程时一定要注意数据储存范围的溢出，此种错误不会被编译器捕获 ###
### 打印unsingned int时使用%u，打印long类型时使用%ld，打印long类型使用%h，打印long long类型使用%ll ###
## char ##
### char是字符类型，但是究其根本还是整数类型 ###
### 用单引号引起来的单个字符被称为字符常量 ###
### char使用%c打印 ###
## 浮点型 ##
### 声明时正号可以省略，可以没有小数点或指数部分，但不能同时省略 ###
### 打印浮点数使用%f &ensp以指数形式打印使用%e ###
### 使用float类型进行精度计算，在小数位数不够时会出现精度丢失的现象 ###
## 复数和虚数类型 ##
### 包含相应的头文件即可 ###
## 其他类型 ##
### 从基本类型衍生出的复合类型，诸如数组，指针，结构体，联合体等 ###
## 求类型所占字节数 ##
### 使用内置的sizeof()运算符即可 ###
## 3.5&ensp;使用数据类型 ##
### 注意：把一个类型的数值初始化给不同类型的变量时，编译器会自动把数值转换为与变量匹配的数据类型，这将导致部分数据丢失 ###
### 变量的命名尽量是有意义的，而不是诸如a,b,c等无意义的变量名，在参加工作后可能会有相应的变量命名规则 ###
## 3.6&ensp;参数与陷阱 ##
### 在函数调用时要注意参数的匹配，一般函数如果类型不匹配或者数量不匹配在编译阶段就会出现错误，但是对于printf等可变参数的函数来说，在编译阶段并不会进行报错，可能会出现异想不到的情况 ###
## 3.7&ensp;转义序列示例 ##
### 刷新缓冲区，注意在一般情况下printf函数并不会实时的将输出同步到屏幕上，在这中间存在一个缓冲区，当缓冲区满、碰到换行字符、需要输入的时候，会进行刷新缓冲区的操作，即将输出同步到屏幕上。还可以使用函数fflush()函数来进行缓冲区的刷新 ###
## 3.8&ensp;关键概念 ##
### C语言会进行自动类型转换，称为隐式转换 ###
## 3.9&ensp;本章小结 ##
## 3.10&ensp;复习题 ##
### 见笔记文档复习题 ###
## 3.11&ensp;编程练习 ##
### 见示例代码chapter3文件夹 ###
