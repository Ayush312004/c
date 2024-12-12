#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, long long> statePopulation;
    statePopulation["Maharashtra"] = 39538223;
    statePopulation["Bihar"] = 29145505;
    statePopulation["MP"] = 21538187;
    statePopulation["punjab"] = 20201249;
    string stateName;
    cout << "Enter the name of a state to get its population: ";
    getline(cin, stateName);
    auto it = statePopulation.find(stateName);
    if (it != statePopulation.end()) {
        cout << "The population of " << stateName << " is= " << it->second << endl;
    } else {
        cout << "State not found!" << endl;
    }

    return 0;
}