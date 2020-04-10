#include "Event.h"

Event::Event()
{
	date = Date();
	time = Time_();
}

Event::Event(Date date, Time_ time)
{
	this->date = date;
	this->time = time;
}

Event::~Event(){}

void Event::setDate(Date date)
{
	this->date = date;
}

Date Event::getDate()
{
	return this->date;
}

void Event::setTime(Time_ time)
{
	this->time = time;
}

Time_ Event::getTime()
{
	return this->time;
}
