#include<iostream>
using namespace std;
#include<vector>

//类似二维数组
void test01()
{
	vector<vector<int>>v;

	//创建小容器
	vector<int>v1;
	vector<int>v2;
	vector<int>v3;
	vector<int>v4;
	//往小容器添加数据
	for (int i = 0; i < 4; i++)
	{
		v1.push_back(i + 1);
		v2.push_back(i + 2);
		v3.push_back(i + 3); 
		v4.push_back(i + 4);
	}

	//将小容器插入到大的容器
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);

	//通过大容器遍历小容器
	for (vector<vector<int>>::iterator it = v.begin(); it != v.end(); it++)
	{
		//(*it)---就是一个容器vector<int>
		for (vector<int>::iterator vit = (*it).begin(); vit!=(*it).end(); vit++)//(*it).begin（）小容器的起始位置
		{
			cout << (*vit) << " " ;
		}
		cout << endl;
	}

}

int main()
{
	test01();
	system("pause");
	return 0;
}