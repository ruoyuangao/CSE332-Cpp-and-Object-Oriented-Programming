#pragma once

class simpleStruct1 {
public:
	simpleStruct1() {

	}
	int getMember1() {
		return member1;
	}
	int getMember2() {
		return member2;
	}
	void set(int a, int b) {
		this->member1 = a;
		this->member2 = b;
	}
	simpleStruct1 copy(simpleStruct1 ss) {
		simpleStruct1 newSS = simpleStruct1();
		newSS.member1 = ss.member1;
		newSS.member2 = ss.member2;
		return newSS;
	}
private:
	int member1 = 0;
	int member2 = 0;

};