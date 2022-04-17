#pragma once
#ifndef MODEL_H
#define MODEL_H
#include <vector>
#include <iostream>


namespace Model {

	struct Human
	{
		char name[255];
		char secondName[255];
		char surname[255];
		bool gender;
		int age;
	};
	struct Reader
	{
		Human who;
		int readerId;
		bool borrower;
		int bookId;
	};
	
	struct Book
	{
		int bookId;
		int authorId;
		char title[255];
		bool bookLendingStatus;
		int readerId;
	};

	struct Author
	{
		int authorId;
		Human who;
		int bookId;

	};
	//extern const Reader example;
	//extern const Book example;
	void AddNewReader(...);

	void AddNewBook(...);

	void IssueAbook(...);

	void returnAbook(...);

	void searchTheBook(...);

	void searchTheReader(...);

	void Model();
}
//SFML,  CURL, BOOST::ASIO
#endif // !HEADER_H#pragma once
