/*여러분은 고객의 주문을 받는 프로그램을 개발하려고 합니다. 주문은 들어온 순서대로 처리됩니다. 
이 때 여러분이라면 어떤 자료구조를 선택하실 건가요? 이유를 함께 적어주세요.
*/

#include<iostream>
#include<queue>
#include<string>

using namespace std;

typedef struct Order
{
	string customerName; // 고객이름
	string item;  // 주문한 물건
	int quantity; // 주문 수량
	int price;    // 주문 가격
	int Sum;      // 주문 총 가격

	// 각 변수 초기화
	Order(string name, string itm, int qty, int pri, int sum) : customerName(name), item(itm), quantity(qty), price(pri), Sum(sum) {}
} Orderinfo;

class OrderManager
{
public:
	void AddOrder(const string& name, const string& item, int quantity, int price, int Sum)
	{
		Sum = (price * quantity);
		orders.emplace(name, item, quantity, price, Sum); // 새로운 주문 객체를 큐에 추가
	}

	void ProcessOrder() // 주문 처리
	{
		// 큐에 주문이 있는가?
		if (!orders.empty())
		{
			Order currentOrder = orders.front(); // 현재 처리할 주문을 큐의 앞에서 가져온다.
			orders.pop(); // 주문을 큐에서 제거
			// 처리 중인 주문 정보 출력
			cout << "Processing order for |";
			cout << currentOrder.customerName << ": " << currentOrder.item << ": " << currentOrder.quantity << " | " << currentOrder.price << " | " << currentOrder.Sum << " | " << endl;
		}
		else
		{
			cout << "No orders to process. " << endl; // 주문이 없을 때 
		}
	}

	// 큐에 주문이 있는지 확인
	bool bfHasOrders() const
	{
		return !orders.empty(); // 큐가 비어있지 않으면 true반환
	}
private:
	// 주문을 저장할 큐
	queue<Order> orders;
};

int main()
{
	OrderManager manager;

	// 주문 추가
	manager.AddOrder("김감자", "토마토", 2, 3000, NULL);
	manager.AddOrder("인프런", "바나나", 1, 2000, NULL);

	while (manager.bfHasOrders())
	{
		manager.ProcessOrder(); // 주문처리
	}
	return 0;
}