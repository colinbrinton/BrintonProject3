/******************************************************************************
*       Class: NumDays
*  Base Class: ** None **
*
*
* This file defines the static, const data members, if any, and the class
* methods not defined in the class definition file, NumDays.h
*
* Programmer: Colin Brinton
*
* Revision     Date                        Release Comment
* --------  ----------  ------------------------------------------------------
*   1.0     04/26/2015  Initial Release
*
*
* ----------------------------- Public Interface -----------------------------
*      Method                               Description
* ----------------  ----------------------------------------------------------
* NumDays()						Default Constructor
* ~NumDays()					Class Destructor
* NumDays(double hrs)			Initializing Constructor, accepts double value and
*									stores it in hrsWorked
* addHours(double hrs)			Adds hours to hrsWorked
* operator++()					Adds 1 to hrsWorked at call time (prefix)
* operator++(int)				Adds 1 to hrsWorked after call time (postfix)
* operator--()					Subtracts 1 to hrsWorked at call time (prefix)
* operator--(int)				Subtracts 1 to hrsWorked after call time (postfix)
* operator-=(const NumDays& a)	Compound subtraction assignment, tests for negative
*									hours, sets hrsWorked to 0 if true
* getDays()						Converts hrsWorked to day, returns int
* getHours()					Provides remaining hours, returns double
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
* non-static   double      hrsWorked     Stores the number of hours 
*
******************************************************************************
*/
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <ostream>   // Defines objects and classes used for stream I/O
#include "NumDays.h" // Class Definition file

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

// Class Constant Value Initializations
double DAY = 8.0;

// Class Default Constructor
NumDays::NumDays()
{
	hrsWorked = NULL;   // Defaults hrsWorked to 0.0
}

// Class Initializing Constructor
NumDays::NumDays(double hrs)
{
	this->hrsWorked = hrs;
}

// Mutator Methods

	//Operator Overloading
NumDays NumDays::operator++()  //Prefix
{
	hrsWorked++;
	return *this;
}

NumDays NumDays::operator++(int)  //Postfix
{
	NumDays temp = *this;
	hrsWorked++;
	return temp;
}

NumDays NumDays::operator--()   //Prefix
{
	hrsWorked--;
	return *this;
}

NumDays NumDays::operator--(int)  //Postfix
{
	NumDays temp = *this;
	hrsWorked--;
	return temp;
}

NumDays& NumDays::operator-=(const NumDays& a)
{
	//Perform Subtraction Assignment
	this->hrsWorked -= (a.hrsWorked);

	// Test for negative hours
	if (this->hrsWorked < NULL)
		*this = NULL;

	 return *this;
}

void NumDays::addHours(double hrs)
{
	hrsWorked += hrs;
}


	// Observer Methods
int NumDays::getDays() const  // Declared cosnt because the method does not change
{									// any member variables
	double days;
	days = hrsWorked / DAY;
	days = static_cast<int> (days); // Static cast days from double to int
	return days;
}

double NumDays::getHours() const
{
	double hours;
	hours = hrsWorked / DAY;
	hours = (hours - ((long)hours)) * DAY; // Only keep decimal portion
	return hours;
}

// Class Destructor
NumDays::~NumDays()
{
}

// Friend methods

/******************************************************************************
* Method: operator<<()
*
* Method Description
* ------------------
* An operator overloading function, allows for specifically formatted output of days
* and hours worked.
*
* Method Arguments
* ----------------
*   Type        Name                        Description
* --------  -------------  ------------------------------------------------
* ostream	out				Output for console
* NumDays	a				Object to be displayed
*
* Return Value
* ------------
*   Type                              Description
* --------  ---------------------------------------------------------------
* ostream	Console output
*
***************************************************************************
*/

ostream &operator<<(ostream& out, NumDays a)
{
	out << a.getDays() << " days, " << a.getHours() << " hours";
	return out;
}