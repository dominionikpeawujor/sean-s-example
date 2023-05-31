#include <iostream>
#include <string>
using namespace std;

//IF-ELSE STATEMENT WITH C++
int main() {
	int temperature = 0;
    cout << "Enter your current temperature: ";
    cin >> temperature;
    
    if (temperature > 35) {
    	cout << "High Temperature!";
    }
    else if (temperature == 35) {
    	cout << "IDAN, you dey motivate me!";
    }
    
    else if (temperature < 35) {
    	cout << "WAHALA WAHALA WAHALA!!!";
    }
    
    else {
    	cout << "Invalid input";
    }
    
    //while(GOAT == "ronaldo") {
    	//cout << "PSG is the best!\n";
    //};
    //	cout << "STOP LYING JOR!\n";
       
   // for(int i = 0; i <10; i++) {
    //	cout << jerseyNumbers[i] << " PSG Player\n";
    //}
	return 0;
}
