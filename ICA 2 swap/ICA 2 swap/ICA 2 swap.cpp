// ICA 2 swap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



int main()
{
    cout << "enter 2 words (press enter to enter next word)\n";
    string word1 = "";
    string word2 = "";
    cin >> word1;
    cin >> word2;
    cout << "your current order is " << word1 << " " << word2 << endl;

   //swap function
    swap(word1, word2);

    cout << "after swap your order is " << word1 << " " << word2 << endl;

}

void swap(string &word1, string &word2) {
    string placeholder = word1;
    word1 = word2;
    word2 = placeholder;
}
