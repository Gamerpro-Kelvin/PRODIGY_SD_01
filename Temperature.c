#include <stdio.h>

int main() {
    char unit;
    double temperature, converted_temperature;

    printf("Enter the temperature and unit (e.g., 25 C): ");
    scanf("%lf %c", &temperature, &unit);

    if (unit == 'C' || unit == 'c') {
        // Convert Celsius to Fahrenheit and Kelvin
        converted_temperature = (temperature * 9 / 5) + 32;
        printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, converted_temperature);
        converted_temperature = temperature + 273.15;
        printf("%.2f Celsius = %.2f Kelvin\n", temperature, converted_temperature);
    } else if (unit == 'F' || unit == 'f') {
        // Convert Fahrenheit to Celsius and Kelvin
        converted_temperature = (temperature - 32) * 5 / 9;
        printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, converted_temperature);
        converted_temperature = converted_temperature + 273.15;
        printf("%.2f Fahrenheit = %.2f Kelvin\n", temperature, converted_temperature);
    } else if (unit == 'K' || unit == 'k') {
        // Convert Kelvin to Celsius and Fahrenheit
        converted_temperature = temperature - 273.15;
        printf("%.2f Kelvin = %.2f Celsius\n", temperature, converted_temperature);
        converted_temperature = (converted_temperature * 9 / 5) + 32;
        printf("%.2f Kelvin = %.2f Fahrenheit\n", temperature, converted_temperature);
    } else {
        printf("Invalid unit.\n");
    }

    return 0;
}
