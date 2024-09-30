#include "Ram.h"
#include <iostream>
using namespace std;
Ram::Ram() { //Ram 함수가 생성되었을 때
	size = 100 * 1024; 
	// size를 100*1024로 초기화

	for (int i = 0; i < sizeof(mem); i++) {
		mem[i] = 0;
		//mem 배열 0으로 초기화
	}
}
Ram::~Ram() { //소멸 될 때
	cout << "메모리 제거됨" << endl;
}

char Ram::read(int address) { //주소를 받으면 주소의 할당된 값을 mem배열에서 찾아서 리턴
	return mem[address];
}

void Ram::write(int address, char value) { //주소를 받아서 해당 주소에 value 값 할당
	mem[address] = value;
}
