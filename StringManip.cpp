#include "StringManip.h"
///////////////////////////////////////////////////////////////////////////
//requires sstream
string StringManip::CharToString(const char c)
{
	std::stringstream sschar;
	sschar << c;
	return sschar.str();
}
void StringManip::EmptySSTream(std::stringstream* s)
{
	s->str("");
}


void StringManip::LambdaPrint(const std::string s)
{
	for_each(s.begin(), s.end(), [](char const& c) {cout << c << ' '; });
}


void StringManip::printUsingIterator(const std::string  s)
{
	for (auto it = s.cbegin(); it != s.cend(); ++it)
	{
		std::cout << *it;
	}
}
void StringManip::printUsingRangeBasedForLoop(const std::string s)
{
	for (char const c : s)
	{
		cout << c;
	}
}

void StringManip::printJSStyleForLoop(const std::string s)
{
	for (std::string::size_type i = 0; i < s.size(); i++)
	{
		cout << s[i];
	}
}
string StringManip::repeat(const string str, const int times)
{
	string tmp;
	for (int i = 1; i <= times; i++) { tmp += str; }
	return tmp;

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
double StringManip::stod_stream(const string strdbl)
{
	double d;
	string copystr = strdbl;
	std::istringstream(copystr) >> d;
	return d;
}
const std::string WHITESPACE = " \n\r\t\f\v";

string StringManip::ltrim(const std::string& s)
{
	size_t start = s.find_first_not_of(WHITESPACE);
	return (start == string::npos) ? "" : s.substr(start);
}

string StringManip::rtrim(const std::string& s)
{
	size_t end = s.find_last_not_of(WHITESPACE);
	return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

string StringManip::trim(const std::string& s)
{
	return rtrim(ltrim(s));
}
