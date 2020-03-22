// StringManip.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include "StringManip.h"
//the lamda didnt work in class:
void coutAChar(char const);
void printUsingForEach(const std::string);
template <size_t N>
void splitString(string(&arr)[N], string );
int getTokenCount(const string);

using namespace std;




// // /// /// // // // // // // // // // // / M  A  I  N
int main()
{
	StringManip sm;

	std::string s = "\n\tHello World \r\n";
	std::cout << "START::" << sm.trim(s) << "::END";



	//const string line = "test one two three.";
	string line = "4 / 4 + sine(45)";
	//line = "(2 * 5)  ^ 3";

	string tokens =line;
	string token;
	for (auto nexttoken = tokens.cbegin(); nexttoken != tokens.cend(); ++nexttoken)
	{
		 token =*nexttoken;
		 cout << token << endl;
		 //cout << sm.trim(token) << endl;
	}

	string charstring = (sm.CharToString('C') + sm.CharToString('H') + sm.CharToString('A') + sm.CharToString('R'));

	goto proc_end;

  	//int idx = getTokenCount(line); // doesnt work index needs to be constant
	//string arr[idx]; // could use a vector
	//splitString(arr, line);
	//for (int i = 0; i < 4; i++) 
	//	cout << arr[i] << endl;

	for (auto it = line.cbegin(); it != line.cend(); ++it)
	{
		token= *it;
		if (token != " ") std::cout << token << endl;
	}
	cout << sm.repeat("// ", 10) << sm.repeat("\n", 4) << endl;
	//string s = "Hello World";
	cout << "char conversion: " << endl;
	cout << charstring << endl;

	cout << "Ways of iterating: '" << s << "': " << endl;
	cout << "Lambda: " << endl;
	sm.LambdaPrint(s);

	cout << "\nIterator: " << endl;
	sm.printUsingIterator(s);

	cout << "\nRange: " << endl;
	sm.printUsingRangeBasedForLoop(s);
	cout << "\nJavaScript style for loop: " << endl;
	sm.printJSStyleForLoop(s);


	//wouldnt work in class:
	cout << "\nForEach: " << endl;
	printUsingForEach(s);
	cout << sm.repeat("// ", 10) << sm.repeat("\n", 4) << endl;

	proc_end:
	return 0;

} /// MAIN
int getTokenCount(const string input)
{
	int i = 0;
	string trashcan;
	stringstream ssin(input);
	while (ssin.good()) {
		ssin >> trashcan;
		++i;
	}
	return i;
}

template <size_t N>
void splitString(string(&arr)[N], string str)
{
	int n = 0;
	istringstream iss(str);
	for (auto it = istream_iterator<string>(iss); it != istream_iterator<string>() && n < N; ++it, ++n)
		arr[n] = *it;
}
void coutAChar(char const c)
{
	cout << c;
}
//calls a function:
void printUsingForEach(const std::string s)
{
	for_each(s.begin(), s.end(), coutAChar);
}
