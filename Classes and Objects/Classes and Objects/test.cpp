#include<iostream>
using std::cout;
using std::cin;
using std::endl;

// ����ڲ����Զ��壺
// 1����Ա����
// 2����Ա����
class Person {
	// ��Ա����
public:
	// ��ʾ���з���
	void showinfo()
	{
		cout << _name << "-" << _sex << "-" << _age << endl;
	}
	// ��Ա������Ҳ��������ԣ�
//private:
	// ��ʾ˽������
	char _sex;
	const char* _name;
	int _age;
};
// ���ж�������ݿ��Է�Ϊ���к�˽��
// ���е����Ի��߷�����public��Ա�綨��ȷ��
// ˽�е����Ի��߷�����private��Ա�綨��ȷ��
// ���������Ի��߷�����project��Ա�綨��ȷ��
// classĬ�ϵĶ���������˽�еģ���structĬ�ϵ��ǹ��е�
//

int main()
{
	Person p1;
	// ˽�����Բ�����ֱ�ӷ���
	p1._name = "Peter";
	p1._age = 20;
	p1._sex = '1';
	p1.showinfo();

	return 0;
}