#pragma once
#include <iostream>
using namespace std;

class Date{

	void need_null(int needer);
	int day, month, year;

public:
	Date(int day, int month, int year);

	void set_day(int day);
	void set_month(int month);
	void set_year(int year);
	void set_date(int day, int month, int year);

	int get_day();
	int get_month();
	int get_year();

	void print_date();
	bool is_lipe();

	~Date();
};