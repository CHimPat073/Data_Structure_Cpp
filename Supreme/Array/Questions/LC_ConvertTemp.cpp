#include<bits/stdc++.h>
using namespace std;

vector<double> ConvertTemp(double temp){
    //We have to convert Celsius to Fahrenheit and Kelvin
    double k =temp + 273.15; // Convert Celsius to Kelvin
    double f = (temp * 1.8) + 32;
    vector<double> ans;
    ans.push_back(k);
    ans.push_back(f);
    return ans;
    
    
}
int main(){
    vector<double> res = ConvertTemp(25); // Example temperature in Celsius
    cout << "Temperature in Kelvin: " << res[0] << endl;
    cout << "Temperature in Fahrenheit: " << res[1] << endl;
    return 0;
}