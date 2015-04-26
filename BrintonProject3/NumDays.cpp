/******************************************************************************
*       Class: **Class Name**       (Ex: Car)
*  Base Class: ** None **  Supply Base Class name if inheritance applies
*
*
* This file defines the static, const data members, if any, and the class
* methods not defined in the class definition file, ***ClassName***.h
*
* Programmer: **Your Name**
*
* Revision     Date                        Release Comment
* --------  ----------  ------------------------------------------------------
*   1.0     MM/DD/YYYY  Initial Release
*   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
*
*
* ----------------------------- Public Interface -----------------------------
*      Method                               Description
* ----------------  ----------------------------------------------------------
* Class()           Default Constructor
* ~Class()          Class Destructor
*  ***Enter the remaining Class methods here***
*
*
* ------------------------------ Private Methods -----------------------------
*       Name                               Description
* ----------------  ----------------------------------------------------------
*                           *** No private methods ***
*
*
*
* ------------------------- Data Member Initializations ----------------------
*               Data
*    Type       Type         Name                   Description
* ----------  --------  --------------  --------------------------------------
*
******************************************************************************
*/
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <ostream>
#include "NumDays.h"   // Class Definition file

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program


// Class Constant Value Initializations
double DAY = 8.0;

// Class Default Constructor
NumDays::NumDays()
{
	hrsWorked = NULL;
}

NumDays::NumDays(double hrs)
{
	this->hrsWorked = hrs;
}

//Functions

NumDays operator+(NumDays a, NumDays b)
{
	return NumDays(a.hrsWorked + b.hrsWorked);
}

NumDays operator-(NumDays a, NumDays b)
{
	return NumDays(a.hrsWorked - b.hrsWorked);
}

ostream &operator<<(ostream& out, NumDays a)
{
	out << a.getDays() << " days, " << a.getHours() << " hours";
	return out;
}

NumDays NumDays::operator++()
{
	hrsWorked++;
	return *this;
}

NumDays NumDays::operator++(int)
{
	NumDays temp = *this;
	hrsWorked++;
	return temp;
}

NumDays NumDays::operator--()
{
	hrsWorked--;
	return *this;
}

NumDays NumDays::operator--(int)
{
	NumDays temp = *this;
	hrsWorked--;
	return temp;
}

NumDays& NumDays::operator-=(const NumDays& a)
{
	(this->hrsWorked) = ((this->hrsWorked) - (a.hrsWorked));
	return *this;
}

void NumDays::addHours(double hrs)
{
	(this->hrsWorked) += hrs;
}

int NumDays::getDays()
{
	double days;
	days = hrsWorked / DAY;
	days = static_cast<int> (days);
	return days;
}

double NumDays::getHours()
{
	double hours;
	hours = hrsWorked / DAY;
	hours = (hours - ((long)hours)) * DAY;
	return hours;
}

// Class Destructor
NumDays::~NumDays()
{
}
