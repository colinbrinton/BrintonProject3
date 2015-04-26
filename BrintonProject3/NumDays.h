#pragma once

/******************************************************************************
*       Class: NumHours
*  Base Class: ** None **
*
* This file defines the members of the class: NumHours
* These members include class variable data members, class constant, static
* data members, and class method declarations only and/or class method
* declarations and definitions.
*
* Programmer: Colin Brinton
*
* Revision     Date                        Release Comment
* --------  ----------  -------------------------------------------------------
*   1.0     04/26/2015  Initial Release
* 
*
* Class Description
* -----------------
*  The purpose of this class is to store the number of hours worked by an employee
* and convert that number to days and remaining hours. Provided overloaded operators
* for addition, subtraction, incredment, decrement, subtraction assign. Also Provides 
* an overloaded output operator.
*
*
* ----------------------------- Public Interface ------------------------------
*      Method                               Description
* ----------------  -----------------------------------------------------------
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
* ------------------------------ Private Methods ------------------------------
*       Name                               Description
* ----------------  -----------------------------------------------------------
*                           *** No private methods ***
*
*
* --------------------------- Private Data Members ----------------------------
*               Data
*    Type       Type       Name                    Description
* ---------- --------- ------------ -------------------------------------------
* non-static   double   hrsWorked     Stores the number of hours
*
*
* ------------------  Public "static const" Data Members ----------------------
*   Data
*   Type         Name                         Description
* --------  --------------  ---------------------------------------------------
*                       *** No public data members ***
*
*******************************************************************************
*/
// Namespaces utilized in this header file
using namespace std; // Announces to the compiler that members of the namespace
// "std" are utilized in this file

// External Definition Files
class NumDays
{
private:
	// 1. Non-static (instance) Variable Declarations
	double hrsWorked;

public:
	// 1. Constructors
	//    A. Default Constructor
	NumDays();

	//    B. Initializing Constructors
	NumDays(double hrs);

	// 2. Class Destructor
	~NumDays();

	// 3. Mutator Methods
	void addHours(double hrs);

	// 4. Observer Methods
	int getDays() const;
	double getHours() const;

	// 5. Overloaded Operators
	NumDays operator++();
	NumDays operator++(int);
	NumDays operator--();
	NumDays operator--(int);
	NumDays& operator-=(const NumDays& a);

	// 6. Granted "friend" Method Declarations
	friend NumDays operator+(NumDays a, NumDays b) { return NumDays(a.hrsWorked + b.hrsWorked); }
	friend NumDays operator-(NumDays a, NumDays b) { return NumDays(a.hrsWorked - b.hrsWorked); }
	friend ostream& operator<< (ostream& out, const NumDays);
};

