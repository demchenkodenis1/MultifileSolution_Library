#pragma once
#ifndef MODEL_H
#define MODEL_H
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include <chrono>
using std::chrono::system_clock;
using std::chrono::system_clock;



//std::chrono::milliseconds sec = duration.count();


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
		system_clock::time_point registration;
		std::chrono::year production;
	};

	struct Author
	{
		int authorId;
		Human who;
		int bookId;

	};

	struct AbonRec {
		int readerId;
		int bookId;
		system_clock::time_point dateOfleft;
		std::chrono::day duration;
		system_clock::time_point return_;

	};

	struct BookRecord
	{
		system_clock::time_point registration;//дата выдачи
		int readerId;
		int bookId;
		int days;//срок выдачи
		int count;

	};

	void f00() {
		Book book;
		/*user conversation*/
		book.registration = system_clock::now();
	}

	extern const Reader example;

	extern const Book example2;

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
