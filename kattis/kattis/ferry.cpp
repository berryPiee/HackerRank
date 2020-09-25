#include <stdio.h>
#include <string>
#include <iostream>
#include <sstream>
#include <vector>
#include <deque>

using namespace std;

vector<string> fillStacksWithCars(deque<int>& rightQ, deque<int>& leftQ, int numOfCars){
    vector<string> locationMemory;
    for(int i = 0; i < numOfCars; i++){
        int carLength;
        string location;
        cin >> carLength >> location;
        if(location == "right"){
            rightQ.push_back(carLength);
            locationMemory.push_back("right");
        }
        else{
            leftQ.push_back(carLength);
            locationMemory.push_back("left");
        }
    }
    return locationMemory;
}

void traverseQ(deque<int>& rightQ, deque<int>& leftQ){
    
}

int main(int argc, const char * argv[]) {
    
    int testCases;
    cin >> testCases;
    
    for(int i = 0; i < testCases; i++){
        deque<int> rightQ, leftQ;
        int ferryLength, numOfCars, count = 0;
        cin >> ferryLength >> numOfCars;
        vector<string> locationMemory = fillStacksWithCars(rightQ, leftQ, numOfCars);
        bool left = true;
        
        while(!rightQ.empty() || !leftQ.empty()){
            if(locationMemory[count] == "left" && left == true)
        }
        
    }
    
    
    return 0;
}

