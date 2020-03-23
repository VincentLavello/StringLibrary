/*
File Name:				StringManip.cpp 
Author:			        Vincent Lavello id: 0577473, vlavello473@student.msjc.edu / vincentlavello@gmail.com
Description:			a collection of string functions. 
dependencies			requires sstream
Revision history:		-version 1 3/22/20
*/
#include "StringManip.h"
///////////////////////////////////////////////////////////////////////////
//requires sstream
/*
Function: CharToString
Author: Vincent Lavello
Description: convert  char to string . `
*/
string StringManip::CharToString(const char c)
{
	std::stringstream sschar;
	sschar << c;
	return sschar.str();
}
/*
Function: EmptySSTream
Author: Vincent Lavello
Description: clears stream string. `
*/
void StringManip::EmptySSTream(std::stringstream* s)
{
	s->str("");
}
/*
Function: LambdaPrint
Author: Vincent Lavello
Description: prints words in string. `
*/
void StringManip::LambdaPrint(const std::string s)
{
	for_each(s.begin(), s.end(), [](char const& c) {cout << c << ' '; });
}
/*
Function: printUsingIterator
Author: Vincent Lavello
Description: prints words in string. `
*/
void StringManip::printUsingIterator(const std::string  s)
{
	for (auto it = s.cbegin(); it != s.cend(); ++it)
	{
		std::cout << *it;
	}
}
/*
Function: printUsingRangeBasedForLoop
Author: Vincent Lavello
Description: prints words in string. `
*/
void StringManip::printUsingRangeBasedForLoop(const std::string s)
{
	for (char const c : s)
	{
		cout << c;
	}
}
/*
Function: printJSStyleForLoop
Author: Vincent Lavello
Description: prints chars in string. `
*/
void StringManip::printJSStyleForLoop(const std::string s)
{
	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
}
/*
Function: repeat
Author: Vincent Lavello
Description: builds string of multiple input str times number `
*/
string StringManip::repeat(const string str, const int times)
{
	string tmp;
	for (int i = 1; i <= times; i++) { tmp += str; }
	return tmp;

}
/*
Function: stod_stream
Author: Vincent Lavello
Description: does what vb does easy. convert string to double
*/
double StringManip::stod_stream(const string strdbl)
{
	double d;
	string copystr = strdbl;
	std::istringstream(copystr) >> d;
	return d;
}
/*
Function: dtostr_stream
Author: Vincent Lavello
Description: does what vb does easy. convert double to string
*/
string StringManip::dtostr_stream(const double dblSource)
{
	double dblCopy = dblSource;
	std::ostringstream strs;
	strs << dblCopy;
	std::string str = strs.str();
	return str;
}
/*
Function: stoi_stream
Author: Vincent Lavello
Description: does what vb does easy. convert string to int
*/
int StringManip::stoi_stream(const string strInt)
{
	int i;
	string copystr = strInt;
	std::istringstream(copystr) >> i;
	return i;
}
/*
Function: ltrim
Author: Vincent Lavello
Description: deletes any space or tabs from left of string
*/
string StringManip::ltrim(const std::string& s)
{
	size_t start = s.find_first_not_of(WHITESPACE);
	return (start == string::npos) ? "" : s.substr(start);
}
/*
Function: rtrim
Author: Vincent Lavello
Description: deletes any space or tabs from right of string
*/
string StringManip::rtrim(const std::string& s)
{
	size_t end = s.find_last_not_of(WHITESPACE);
	return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}
/*
Function: trim
Author: Vincent Lavello
Description: deletes any space or tabs from right and left of string
*/
string StringManip::trim(const std::string& s)
{
	return rtrim(ltrim(s));
}

// // // // // // / O V E R L O A D S
// Define copy assignment operator.
string StringManip::operator=(const char rhschar)
{
	std::stringstream sschar;
	// Assignment operator returns left side of assignment.
	sschar << rhschar;
	return string(sschar.str());

}