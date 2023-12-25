#include <iostream>
#include <string>

using namespace std;

class Item {
  public:
    Item() { cout << "������ ȣ�� " << endl; }

    explicit Item(int num) : num(num) { 
        cout << " �⺻ ���� Item(int num) " << endl; 
    }
    explicit Item(string name) : name(name) {
        cout << " Item(string name) " << endl;
    }
    explicit Item(int num, string name) : num(num), name(name) {
        cout << " Item(int num, string name) " << endl;
    }

  private:
    int num;
    string name;
};

int main() {
    Item i1 = 5; 
    Item i2(2);
    Item i3 = (Item)3;
    Item i5(2, "Dirt");
}