#include <iostream>
using namespace std;

#include <vector>
#include <algorithm>

namespace chungsick {
	class Chungsick {
	public:
		string get_name(){
			return this->name;
		}
		void set_name(string name){
			this->name = name;
		}
		void run() {
			cout << this->get_name() << "�� �޸���!!!! ���� ������!!" << endl;
		}
		void salute() {
			cout << this->get_name() << "�� ���ߴ�... : �漺!!" << endl;
		}
		void speak(string word) {
			cout << this->get_name() << "�� ���ߴ�... : " << word << endl;
		}

	private:
		string name = "�����";
		string job = "����";
		int age = 20;
	};
}

int main() {
	string n;
	cin >> n;
	
	std::cout << "hi" << std::endl; //�ƹ�
	chungsick::Chungsick c{};
	c.run();
	c.salute();
}

