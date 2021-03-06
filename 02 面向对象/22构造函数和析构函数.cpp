#include<iostream>
using namespace std;

/*
对象的初始化和清理
//构造函数 初始化
//析构函数 清理 
这两个函数由系统自动调用
构造函数 主要作用在于创建对象时，为对象的成员属性赋值，构造函数由编译器自动调用，无需手动调用
析构函数 主要作用在于对象销毁前系统自动调用，执行一些清理工作
*/

//对象的初始化和清理
//1.构造函数 初始化
class person
{
public:
	//构造函数 无返回值
	//函数名与类相同
	//可有参数，可重载
	//创建对象，构造函数自动调用，只调用一次
	person()
	{
		//如果程序员不写构造函数编译器自动写，不过函数体为空语句
		cout << "person 构造函数调用" << endl;
	}

	//2.析构函数  进行清理的操作
	//没有返回值  不写void
	//函数名和类名相同  在名称面前加 ~
	//不可以有参数，不可重载
	//对象销毁前，自动调用析构函数，调用一次
	~person()
	{
		cout << "person 析构函数调用" << endl;
	}
};

//构造和析构都是必须有的，如果我们自己不提供，编译器会提供一个空实现的构造和析构
void test01()
{
	//p是在栈上的数据，test01执行完毕后，释放这个对象，即销毁这个对象 ，因此会调用析构函数
	person p;//只创建一个person类型的对象，创建对象时系统自动调用 一次构造函数
}

int main()
{
	person p;
	system("pause");
	return 0;
}
