#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    map<string, long long> statePopulations;
    statePopulations["Maharashtra"] = 39538223;
    statePopulations["goa"] = 29145505;
    statePopulations["punjab"] = 21538187;
    statePopulations["MP"] = 20201249;
    statePopulations["UP"] = 13002700;
    string state;
    cout << "Enter the name of a state to get its population: ";
    getline(cin, state);
    auto it = statePopulations.find(state);
    if (it != statePopulations.end()) {
        cout << "The population of " << state << " is " << it->second << "." << endl;
    } else {
        cout << "State not found in the map." << endl;
    }

    return 0;
}
