class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double Kelvin = celsius + 273.15;
        double Fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        return {Kelvin, Fahrenheit};
    }
};
