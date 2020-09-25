#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>


using namespace std;

void fillChoices(vector<int>& choices, int numOfChoices, stringstream& ss){
    for(int i = 0; i < numOfChoices; i++){
        ss >> choices[i];
    }
}

int bachet(int argc, const char * argv[]) {
    
    string game;
    
    while(getline(cin, game)){
        stringstream ss(game);
        int numOfStones, numOfChoices;
        ss >> numOfStones >> numOfChoices;
        vector<bool> winningPosition(numOfStones);
        vector<int> choices(numOfChoices);
        
        fillChoices(choices, numOfChoices, ss);
        
        winningPosition[0] = false; //Need to initialize this value before for loop
        for(int i = 1; i <= numOfStones; i++){
            
            winningPosition[i] = false;
            for(int j = 0; j < numOfChoices; j++){
                if(i >= choices[j] && !winningPosition[i - choices[j]]){
                    winningPosition[i] = true;
                }
            }
        }
        if(winningPosition[numOfStones] == true){
            cout << "Stan wins" << endl;
        }
        else{
            cout << "Ollie wins" << endl;
        }
    }
    
    return 0;
}
