#include <iostream> 
#include <map> 
#include <string> 
using namespace std; 
int main() { 

map<string, long> statePopulation; 

statePopulation["California"] = 39538223; 
statePopulation["Texas"] = 29145505; 
statePopulation["Florida"] = 21538187; 
statePopulation["New York"] = 20201249; 
statePopulation["Pennsylvania"] = 13002700; 
statePopulation["Illinois"] = 12812508; 
statePopulation["Ohio"] = 11799448; 
statePopulation["Georgia"] = 10711908; 
statePopulation["North Carolina"] = 10439388; 
statePopulation["Michigan"] = 10077331; 
string stateName; 

cout << "Enter the name of a state: "; 
getline(cin, stateName);  

auto it = statePopulation.find(stateName); 
if (it != statePopulation.end()) { 
cout << "The population of " << stateName << " is " << it->second << "." << endl; 
} else { 
cout << "State not found in the database." << endl; 
} 
return 0; 
}