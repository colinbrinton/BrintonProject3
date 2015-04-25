#pragma once

/******************************************************************************
*       Class: **Class Name**       (Ex: Car)
*  Base Class: ** None **  Supply Base Class name if inheritance applies
*
* This file defines the members of the class: ***Class Name***
* These members include class variable data members, class constant, static
* data members, and class method declarations only and/or class method
* declarations and definitions.
*
* Programmer: **Your Name**
*
* Revision     Date                        Release Comment
* --------  ----------  -------------------------------------------------------
*   1.0     MM/DD/YYYY  Initial Release
*   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
*
* Class Description
* -----------------
* ** Describe the class defined here, including it's purpose  **
* ** This may take several lines to describe                  **
*
*
* ----------------------------- Public Interface ------------------------------
*      Method                               Description
* ----------------  -----------------------------------------------------------
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
* ***Type: static, non-static***
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
// External Definition Files



class NumDays
{
private:
	// 1. Non-static (instance) Variable Declarations
	double hrsWorked;
	double daysWorked;
	// 2. Static Constant Value Declarations

public:
	// 1. Constructors
	//    A. Default Constructor
	NumDays();
	//    B. Initializing Constructors
	NumDays(double hrs);
	//    C. Conversion Constructors

	// 2. Class Destructor
	~NumDays();

	// 3. Mutator Methods
	void addHours(double hrs);

	// 4. Observer Methods
	int getDays();
	double getHours();

	// 5. Overloaded Operators
	void operator+

	// 6. Type Conversion Operators

	// 7. Granted "friend" Method Declarations

	// 8. Public "static const" Value Declarations

};

