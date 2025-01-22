#include "words.h"

int countWords(const std::vector<std::string> &sentence){
    return sentence.size();
}

std::string findLongestWord(const std::vector<std::string> &sentence) {
    std::size_t longest_length{0};
    std::string longest_word{""};
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

int countVowels(const std::string &word) {
    //int counter{0};
    auto counter{0};
    // int counter = 0;
    for (auto letter : word)
    {
        switch(letter) {
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