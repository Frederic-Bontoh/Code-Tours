#include "words.h"

int main() {
    std::string input_word{""};
    std::vector<std ::string> sentence{};

    std::cout << "Enter a sentence: ";

    while(std::cin.peek() != '\n') {
        std::cin >> input_word;
        sentence.push_back(input_word);
    }

    auto count{countWords(sentence)};
    std::string longest_word{findLongestWord(sentence)};

    auto most_vowels_count{0};
    std::string most_vowels_word{""};
    for (auto word : sentence)
    {
        auto vcount{countVowels(word)};
        if (most_vowels_count < vcount)
        {
            most_vowels_count = vcount;
            most_vowels_word = word;
        }
    }

    std::cout << "Total words: " << count << "\n"
              << "Longest word: " << longest_word << "\n"
              << "Word with most vowels: " << most_vowels_word << std::endl;

    return 0;
}