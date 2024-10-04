#include <iostream>
using namespace std;

class Book
{
private:
	int current_page_;
	void set_percent();

public:
	Book(const string& title, int total_page);
	string title_;
	int total_page_;
	double percent_;
	const Book& ABook(const Book&); // ThickerBook() �Լ��� ����
};

int main(void)
{
	Book web_book("HTML�� CSS", 350);
	Book html_book("HTML ���۷���", 200);

	cout << web_book.ABook(html_book).title_; // �� �β��� å�� �̸��� �����.
	return 0;
}

Book::Book(const string& title, int total_page)
{
	title_ = title;
	total_page_ = total_page;
	current_page_ = 0;
	set_percent();
}

void Book::set_percent()
{
	percent_ = (double)current_page_ / total_page_ * 100;
}

const Book& Book::ABook(const Book& comp_book)
{
	if(comp_book.total_page_ > this->total_page_)
	{
		return comp_book;
	}
	else
	{
		return *this;
	}
}