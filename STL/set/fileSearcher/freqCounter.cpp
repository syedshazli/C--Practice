#include <set>
#include <iostream>
#include <fstream>
#include <string>
// Word Frequency Counter: 
// Read a text file and use a set<string> to store unique words, then count how many unique words exist
int main(){
    std::ifstream input("file.txt");
    std::set<std::string> parsingSet;

    std::string word;
    while (input >> word){
        parsingSet.emplace(word);
    }

    std::cout<<"The text has "<<parsingSet.size()<<" unique words "<<'\n';

}