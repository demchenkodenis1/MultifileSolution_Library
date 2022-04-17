#include "model.h"

namespace Model {
	const Reader example{ 123567, {"John", "Abraham","Smith", true, 32}, true, 12255};
	const Book example{ 12255, 13, "War and Peace", true, 123567};
	namespace {
		static std::vector<Reader> g_readers;
		static std::vector<Book> b_books;
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
	}

	void returnAbook(...)
	{
	}
	
	void Model() {
		std::cout << "Do Model stuff\n";
	}
}