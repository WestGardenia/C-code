#include<iostream>
using std::cout;
using std::cin;
using std::endl;


// 1����1+2+3+4+����+n��Ҫ����ʹ�ó˳�����for��while��if��else��switch��case���ȹؼ��ּ��ݹ�������ж����
// ���������ڱ��ⲻ����ʹ�ø���ѭ���Լ��ݹ�ķ�ʽ�������⣬���Կ���ʹ�ü�����ײ��߼��Լ�c++�﷨�ص�
//		���ǵ�C++����Ĺ��캯���ǿ����ڽ���Ķ���ʵ����ʱ�Զ����õģ���ô�Ϳ��Դ���n������飬���ù��캯����ִ��n�μӷ�ʵ�ֳ���
//		�����þ�̬���ı�������סÿ�μӷ���ı�ı����������Ϳ���ʵ��ǰn���
// ע�⣺���ڱ���ʹ���˾�̬������Դ�������ڽ��ж�ε���ʱ����һ�εĲ��Ի����һ�εı����Ľ����������
//		 �����ÿ�ε���֮ǰ��Ҫ����̬�������г�ʼ��
class Sum {
public:
	Sum()
	{
		_sum += _i;
		_i++;
	}
	static void Init()
	{
		_i = 1;
		_sum = 0;
	}
	static int GetSum()
	{
		return _sum;
	}
private:
	static int _sum;
	static int _i;
};

int Sum::_i = 1;
int Sum::_sum = 0;
class Solution
{
public:
	int Sum_Solution(int n)
	{
		// Sum s[n];	// �䳤���飨C������C99�汾֧�֣�
		Sum::Init();
		Sum* p = new Sum[n];
		return Sum::GetSum();
	}
	
};

int Sum_1(int n)
{
	return (1 + n) * n / 2;
}

int main()
{
	Solution S1;
	cout << S1.Sum_Solution(115) << endl;
	cout << S1.Sum_Solution(115) << endl;
	cout << Sum_1(115) << endl;
	return 0;
}