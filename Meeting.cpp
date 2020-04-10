#include "Meeting.h"

Meeting::Meeting()
{
	person = "My bro";
	place = "Bilya Krusty Krabs`a";
}

Meeting::Meeting(Date d, Time_ t, string person, string place)
	:Event(d, t)
{
	if (person == "" || person == " " || person.empty())
	{
		throw "person empty!";
	}
	else if (place == "" || place == " " || place.empty())
	{
		throw "place empty!";
	}
	else {
		this->person = person;
		this->place = place;
	}
}

Meeting::~Meeting(){}

void Meeting::setPerson(string person)
{
	if (person == "" || person == " " || person.empty())
	{
		throw "������ ����� �� ������ ������!";
	}
	else
	this->person = person;
}

string Meeting::getPerson()
{
	return person;
}

void Meeting::setPlace(string place)
{
	if (place == "" || place == " " || place.empty())
	{
		throw "������ ����� �� ������ ������!";
	}
	else
	this->place = place;
}

string Meeting::getPlace()
{
	return place;
}

string Meeting::toString()
{
	return "{date:" + to_string(date.getDay()) + "-" + to_string(date.getMonth()) + "-" + to_string(date.getYear()) +
		"; time:" + to_string(time.getHour()) + "," + to_string(time.getMinutes()) + 
		"; person: "+ person + "; place: " + place +"}";
}

void Meeting::show()
{
	cout << "+======================+\n";
	cout << "person: " << person<<endl;
	cout << "place: " << place << endl;
	cout << "date: " << date << endl;
	cout << "time: " << time << endl;
	cout << "+======================+\n";
}

string Meeting::type()
{
	return "Meeting";;
}
