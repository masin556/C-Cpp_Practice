#include "../help.h"

class Image
{
public:
	operator string()
	{
		return "사진";
	}
};

class TextMessage
{
public:
	TextMessage(int sendTime, string sendName, string text)
	{
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->text = text;
	}

	int GetSendTime() const { return sendTime; }
	string GetSendName() const { return sendName; }
	string GetText() const { return text; }

private:
	int sendTime;
	string sendName;
	string text;
};


class ImageMessage
{
public:
	ImageMessage(int sendTime, string sendName, Image* image)
	{
		this->sendTime = sendTime;
		this->sendName = sendName;
		this->image = image;
	}

	int GetSendTime() const { return  sendTime; }
	string GetSendName() const { return sendName; }
	Image* GetImage() const { return image; }

private:
	int sendTime;
	string sendName;
	Image* image;
};

int main()
{
	Image* dogImage = new Image; //Image 객체
	TextMessage* hello = new TextMessage(10, "두들", "안녕");
	//만들어 둔 객체의 포인터를 생성자의 인수로 집어 넣는다
	ImageMessage* dog = new ImageMessage(20, "두들", dogImage);

	cout << "보낸시간 : " << hello->GetSendTime() << endl;
	cout << "보낸사람 : " << hello->GetSendName() << endl;
	cout << "  내 용  : " << hello->GetText() << endl;	
	cout << '\n';
 
	cout << "보낸시간 : " << dog->GetSendTime() << endl;
	cout << "보낸사람 : " << dog->GetSendName() << endl;
	cout << "  내 용  : " << (string)*dog->GetImage() << endl;
	cout << '\n';
	


	delete dogImage;
	delete hello;
	delete dog;
}