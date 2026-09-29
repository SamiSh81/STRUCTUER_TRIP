#include<iostream>
using namespace std;
struct number_city_tripe
{
	string number_of_tripe, city;
};
struct date
{
	string day, month;
	int year;
};
struct time_dep
{
	int sec, min, h;
};
struct date_tripe
{
	date d_date_tripe;
	time_dep dep_tripe;
	number_city_tripe c_city;
	number_city_tripe nbumber;
};
int main()
{

	date_tripe the_tripe;
	cout << "ENTER THE CITY :";
	cin >> the_tripe.c_city.city;
	cout << "ENTER THE NUMBER OF THE TRIPE : ";
	cin >> the_tripe.c_city.number_of_tripe;
	cout << "ENTER THE SECONDS : ";
	cin >> the_tripe.dep_tripe.sec;
	cout << "ENTER THE MINUTS : ";
	cin >> the_tripe.dep_tripe.min;
	cout << "ENTER THE HOUR : ";
	cin >> the_tripe.dep_tripe.h;
	cout << "ENTER THE DAY : ";
	cin >> the_tripe.d_date_tripe.day;
	cout << "ENITER THE MONTH : ";
	cin >> the_tripe.d_date_tripe.month;
	cout << "ENTE THE YEAR : ";
	cin >> the_tripe.d_date_tripe.year;

	// TO SHOW THE INFORMATION ABOUT THE TRIPE
	cout << "---------------------------------------" << endl;
	cout << " WELLCOME IN HANNOVER IRPORT " << "INFORMATION ABOUT THE TRIPES " << endl;
	cout << "THE TRIPE TO : " << the_tripe.c_city.city << endl;
	cout << "THE NUMBER TRIPE IS : " << the_tripe.c_city.number_of_tripe << endl;
	cout << "THE CITY : " << the_tripe.c_city.city << endl;
	cout << "TIME OF THE TRIPE : " << the_tripe.dep_tripe.sec << "-" << the_tripe.dep_tripe.min << "-" << the_tripe.dep_tripe.h << endl;
	cout << "DATE OF THE TRIPE : " << the_tripe.d_date_tripe.day << "_" << the_tripe.d_date_tripe.month << "_" << the_tripe.d_date_tripe.year << endl;
	cout << "-----------------------------------------" << endl;

}