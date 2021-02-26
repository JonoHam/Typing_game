#include <fstream>
#include <random>
#include <vector>
#include <string>
#include <iostream>

std::vector<std::string> wordListVector;
int totalWords = 0;

void wordCompilation(){
    std::string word;
    std::ofstream textfile;
    textfile.open("wordsList.txt");
    textfile << "Guru99";
        totalWords++;
        wordListVector.push_back(word);
        std::cout << wordListVector[totalWords] << std::endl;
    textfile.close();
}


int prompt(std::string wordPrompt){
    std::string input;
    std::cout << "Write the word: ";
    std::cout << wordPrompt << std::endl;
    std::cout << "Enter: ";
    std::cin >> input;
    return 0;
}

std::string wordGeneration(int power){
    std::string aWord;
    srand(time(0));
    aWord = wordListVector[rand()%totalWords];
    std::cout << "Word: " << aWord << std::endl;
    int aWordLength = aWord.length();
    while(aWordLength != power){
        srand(time(0));
        aWord = wordListVector[rand()%totalWords];
    }
    std::cout << aWord << std::endl;
    return aWord;
}

