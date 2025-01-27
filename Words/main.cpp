/* The program flow will work as follows:

Get user input: Prompt the user to enter a sentence
Call the functions on that sentence (and words in the sentence for count vowels)
Output:
Display the total number of words
Display the longest word in the sentence
Display the word with the most vowels */


#ifndef WORDS_H_
#define WORDS_H_
#include <vector>
#include <iostream>
#include <string>
#endif
using namespace std;

// function declarations

  int countWords(const vector<string>&);
  string findLongestWord(const vector<string>&);
  int countVowels(const string&);



// prototyes
 
  int countWords(const vector<string> &sentence) // hold the counting of the number of the words from the sentence
  {
    return sentence.size();
  }
  
  // finding the longest word from the sentence
   string findLongestWord(const vector<string> &sentence)
   {
    size_t longest_length{0};
    string longest_word{""};
    for (auto word : sentence)
    {
        auto length{word.length()};
        if (length > longest_length)
        {
            longest_length = length;
            longest_word = word;
        }
    }
    return longest_word;
}
 
 // finding the number of vowels in each word from the sentence
int countVowels(const string &word) 
{
    //int counter{0};
    auto counter{0};
    // int counter = 0;
    for (auto letter : word)
    {
        switch(letter) 
        {
            case 'A':
            case 'a':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                counter++;
            }
    }
    return counter;
}


int main()
 {
    string input_word{""};
    vector<string> sentence{};

    cout << "Enter a sentence: ";

    while(cin.peek() != '\n') 
    {
        cin >> input_word;            // get the sentence from the user
        sentence.push_back(input_word);
    }

    auto count{countWords(sentence)};      // hold the counter of the words in the sentence
    string longest_word{findLongestWord(sentence)};   // hold the longest word in the sentence
 
 
 // findng the word with most vowels
    auto most_vowels_count{0};
    string most_vowels_word{""};

    for (auto word : sentence)
    {
        auto vcount{countVowels(word)};
        if (most_vowels_count < vcount)
        {
            most_vowels_count = vcount;
            most_vowels_word = word;
        }
    }
      // displaying the data
             cout << "Total words: " << count << "\n";
             cout << "Longest word: " << longest_word << "\n";
             cout << "Word with most vowels: " << most_vowels_word << endl;

    return 0;
}

   
