/**
 * @file letter-pyramid.cpp
 *
 * @brief This is a simple project for creating a letter-pyramid for any input string. 
 *		  like the following one:
 * 
 * If the user enters the string "ABCDEFG" the letter pyramid will be:
 *			      A                                                                                                                
 *			     ABA                                                                                                               
 *			    ABCBA                                                                                                              
 *			   ABCDCBA                                                                                                             
 *			  ABCDEDCBA                                                                                                            
 *			 ABCDEFEDCBA                                                                                                           
 *			ABCDEFGFEDCBA
 *
 * @data 2020-4-5
 * @author Kampas Prodromos
 * 
 */

#include <iostream>
#include <string>

#include <cstdint>
#include <bits/stdc++.h>

using namespace std;

int main() {

	string user_input {};

	uint32_t pyramid_levels {};

	cout << "Enter the desired sequence to make the pyramid:" << endl;
	getline(cin, user_input);

	pyramid_levels = user_input.size();
	cout << "\nThe levels of the pyramid are: " << pyramid_levels << endl;


	cout << "\n======= Start of Pyramid =======\n\n";

	for (uint32_t i=0; i<pyramid_levels; i++) {
		uint32_t num_init_spaces {pyramid_levels - i - 1};
		string init_spaces {};

		string str_reversed {user_input.substr(0, i)};
		reverse(str_reversed.begin(), str_reversed.end());

		// Print the spaces before the first character
		init_spaces.insert(0, num_init_spaces, ' ');

		cout << init_spaces;
		cout << user_input.substr(0, i+1);
		cout << str_reversed << endl;
	}

	cout << "\n======= End of Pyramid =======" << endl;

	return 0;
}
