#include "model.h"

namespace Model {
	const Reader example{ {"John", "Abraham", "Smith", true, 32}, 123567, true, 12255};
	const Book example2{ 12255, 13, "War and Peace", true, 123567};
	namespace {
		static std::vector<Reader> g_readers;
		static std::vector<Book> b_books;
		/*static std::vector<pair <int, int>>
		using BalanceRecord = pair <int, int>*/

	}
	void AddNewReader(...)
	{
		//
		g_readers.push_back(Reader());
	}

	void AddNewBook(...)
	{
		//
		b_books.push_back(Book());
	}
	void IssueAbook(...)
	{
		Book book;
		book.registration = system_clock::now();
		bool borrower = true;
		//int bookId = bookId;
		BookRecord count;
		BookRecord.count = 1;
	}

	void returnAbook(...)
	{


	}

	int searchTheBook(Book(title))
	{
		int bookId = 0;
		return bookId;

	}

	int searchTheReader(Reader(Human))
	{
		int readerId = 0;
		return readerId;
	}
	
	void Model() {
		std::cout << "Do Model stuff\n";
	}
}