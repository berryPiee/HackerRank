#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

/*
 * Fills set with cd numbers
 */
void fillSet(unordered_set<int>& set, int iterationNumber){
    int tempCdNumber;
    for(int i = 0; i < iterationNumber; i++){
        cin >> tempCdNumber;
        set.insert(tempCdNumber);
    }
}

int cd(int argc, const char * argv[]) {
    int jackAmount, jillAmount;
    
    while(cin >> jackAmount >> jillAmount && jackAmount != 0 && jillAmount != 0){
        unordered_set<int> jackSet, jillSet;
        int sharedCds = 0;
        
        fillSet(jackSet, jackAmount);
        fillSet(jillSet, jillAmount);
        
        for(auto it = jillSet.begin(); it != jillSet.end(); it++){
            if(jackSet.count(*it)){
                sharedCds ++;
            }
        }
        cout << sharedCds << endl;
    }
    
    return 0;
}
