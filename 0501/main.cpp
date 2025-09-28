#include <iostream>

static const int kYear = 2025;
static const int kMonth = 9;
static const int kDay = 28;

struct Date
{
	int year;
	int month;
	int day;
};

int main()
{
	Date date = { kYear, kMonth, kDay };
	std::cout << "¼—ï" << date.year << "”N" << date.month << "ŒŽ" << date.day << "“ú";
}