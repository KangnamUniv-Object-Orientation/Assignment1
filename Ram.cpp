#include "Ram.h"
#include <iostream>
using namespace std;
Ram::Ram() { //Ram �Լ��� �����Ǿ��� ��
	size = 100 * 1024; 
	// size�� 100*1024�� �ʱ�ȭ

	for (int i = 0; i < sizeof(mem); i++) {
		mem[i] = 0;
		//mem �迭 0���� �ʱ�ȭ
	}
}
Ram::~Ram() { //�Ҹ� �� ��
	cout << "�޸� ���ŵ�" << endl;
}

char Ram::read(int address) { //�ּҸ� ������ �ּ��� �Ҵ�� ���� mem�迭���� ã�Ƽ� ����
	return mem[address];
}

void Ram::write(int address, char value) { //�ּҸ� �޾Ƽ� �ش� �ּҿ� value �� �Ҵ�
	mem[address] = value;
}
