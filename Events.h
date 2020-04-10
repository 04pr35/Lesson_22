#pragma once
#include "Event.h"
#include "BirthDay.h"
#include "Meeting.h"
#include "Custom.h"
#include <vector>
#include <algorithm>

class Events{
protected:
	vector <Event*> List;

public:
	Events();
	~Events();


	void delEvent(int target);
	void addEvent(Event*obj);
	void show();
	void findEvent(Date event_date, Time_ event_time);
};