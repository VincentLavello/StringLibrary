/*
File Name:				StringManip.h class def
Author:			        Vincent Lavello id: 0577473, vlavello473@student.msjc.edu / vincentlavello@gmail.com
Description:			a collection of string functions.
Revision history:		-version 1 3/22/20
*/
#ifndef STRINGMANIP
#define STRINGMANIP
#include <string>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <iterator>
using std::string;
using std::cout;

class StringManip
{
private:
	const std::string WHITESPACE = " \n\r\t\f\v";

public:
	// F U N C T I O N  D E F S
	void LambdaPrint(const std::string);
	string ltrim(const std::string&);
	string rtrim(const std::string&);
	string trim(const std::string&);

	void printUsingIterator(const std::string);
	void printUsingRangeBasedForLoop(const std::string);
	void printJSStyleForLoop(const std::string);
	string repeat(const string, const int);
	string CharToString(const char);
	void EmptySSTream(std::stringstream*);
	double stod_stream(const string strdbl);//convert string to double
	string dtostr_stream(const double);
	int stoi_stream(const string strInt);

	//friend string operator + (char const&, char const&);



// // // // // // // // // // /
//  O V E R L O A D S 
//overload << :
string operator=(const char);

};


#endif // !STRINGMANIP


