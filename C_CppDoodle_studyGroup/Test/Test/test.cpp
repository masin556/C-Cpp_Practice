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
			cout << this->get_name() << "이 달린다!!!! 아주 빠르게!!" << endl;
		}
		void salute() {
			cout << this->get_name() << "이 말했다... : 충성!!" << endl;
		}
		void speak(string word) {
			cout << this->get_name() << "이 말했다... : " << word << endl;
		}

	private:
		string name = "신충식";
		string job = "군인";
		int age = 20;
	};
}

int main() {
	string n;
	cin >> n;
	
	std::cout << "hi" << std::endl; //훈민
	chungsick::Chungsick c{};
	c.run();
	c.salute();
}

