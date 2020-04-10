#pragma once
#include"Date.h"
#include"Time_.h"
class Event
{
protected:
	Date date;
	Time_ time;
public:
	Event();
	Event(Date date, Time_ time);
	~Event();


	void setDate(Date date);
	Date getDate();
	void setTime(Time_ time);
	Time_ getTime();

	virtual void show() = 0;
	virtual string type() = 0;
	virtual string toString() = 0;
};

