#include <iostream>
#include <string>

struct Cut {
public:

	Cut(int front, int side, int back) :
		front{ front }, side{ side }, back{ back } {};

	class Hair {
	public:
		Hair& setFront(int f) {
			cut->front = f;
			return *this;
		}
		Hair& setSide(int s) {
			cut->side = s;
			return *this;
		}
		Hair& setBack(int b) {
			cut->back = b;
			return *this;
		}

		Cut* build() { //프리컨디션 체크 가능
			return cut;
		}

	private:
		Cut* cut = new Cut();
	};

private:
	int front, side, back;
	};



int main() {
	//빌더패턴으로 가독성있는 패턴 만들기
	Cut* cut = Cut::Hair()
		.setBack(1)
		.setFront(2)
		.setSide(3)
		.build();

	//Cut cut{ 3, 4, 2 };
	
	/*Cut cut;
	cut.setFront(3);
	cut.setSide(4);
	cut.setBack(2);*/

	//Cut& cut = (new Cut())->setBack(2).setFront(4).setBack(3); //메소드 체이닝
	//하나라도 빼먹으면 에러코드 넣을 수 없는게단점.



}
