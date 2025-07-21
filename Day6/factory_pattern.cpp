#include <iostream>
#include <string>

struct Doll{
	virtual void push() = 0;
};

class BlueDoll : public Doll {
public:
	void push() override {
		std::cout << "blue";
	}
};

class RedDoll : public Doll {
public:
	void push() override {
		std::cout << "red";
	}
};


class Factory {
public:
	virtual Doll* makeDoll() = 0;

	void threePush() {
		//이 메서드 안에서 임시로 객체 생성, 수행 후 소멸
		Doll* testDool = makeDoll();
	}

};

class BlueFactory : public Factory {
public:
	Doll* makeDoll() override {
		return new BlueDoll();
	}

};


class RedFactory :public Factory{
public:
	Doll* makeDoll() override {
		return new RedDoll();
	}

};


int main() {

	Factory* factory = new BlueFactory();
	Doll* doll = factory->makeDoll();
	doll->push();


	return 0;
}
