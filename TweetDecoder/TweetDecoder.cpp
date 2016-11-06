// TweetDecoder.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

void find_and_replace(string& source, string const& find, string const& replace)
{
	for (string::size_type i = 0; (i = source.find(find, i)) != string::npos;)
	{
		source.replace(i, find.length(), replace);
		i += replace.length();
	}
}

int main() {

	// Name the Variables
	string tweet;

	// User Input Request
	cout << "Enter your tweet: ";

	// Retrieve the User Input
	getline(cin, tweet);

	// Simple find and replace
	find_and_replace(tweet, "LOL", "laughing out loud ");
	find_and_replace(tweet, "IRL", "in real life ");
	find_and_replace(tweet, "AFK", "away from keyboard ");
	find_and_replace(tweet, "NVM", "never mind ");
	find_and_replace(tweet, "BFF", "best friend forever ");
	find_and_replace(tweet, "FTW", "for the win ");
	find_and_replace(tweet, "IIRC", "if I recall correctly ");
	find_and_replace(tweet, "TTYL", "talk to you later ");
	find_and_replace(tweet, "IMHO", "in my humble opinion ");

	std:cout << tweet << "\n";

	return 0;
}
