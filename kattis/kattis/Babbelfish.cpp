#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

/*
 * Reads all word declarations from file and puts them into map
 */
void readDictionary(map<string, string>& dict){
    string line;
    
    //Read until we hit end of word declaration
    while(getline(cin , line)) {
        if(line.empty()){
            break;
        }
        else{
            stringstream ss(line);
            string w1, w2;
            ss >> w1 >> w2;
            dict[w2] = w1;
        }
    }
}

/*
 * Reads all the word which we are going to translate into english
 */
void readWordsToTranslate(map<string, string>& dict, vector<string>& words){
    string tempWord;
    
    while(cin >> tempWord){
        words.push_back(tempWord);
    }
}

int start(int argc, const char * argv[]) {
    map<string, string> dict;
    vector<string> words;

    readDictionary(dict);
    readWordsToTranslate(dict, words);
    
    //Iterate through words we want to translate
    for(auto it = words.begin(); it != words.end(); ++it){
        if(dict.find(*it) != dict.end()){
            cout << dict[(*it)] << endl;
        }
        else{
            cout << "eh" << endl;
        }
    }
    return 0;
}
