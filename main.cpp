#include <iostream>
#include <iomanip>
using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

int main()
{
    double rentMortgage;
    double phone;
    double internetService;
    double utilities;
    double cable;
    double monthlyCost;
    double annualCost;

    cout << "Enter monthly rent or mortgage payment: $";
    cin >> rentMortgage;

    cout << "Enter the monthly phone cost: $";
    cin >> phone;

    cout << "Enter internet service cost: $";
    cin >> internetService;

    cout << "Enter utilities cost: $";
    cin >> utilities;

    cout << "Enter cable: $";
    cin >> cable;

    monthlyCost = rentMortgage + phone + internetService + utilities + cable;
    annualCost = monthlyCost * 12;

    cout << fixed << setprecision(2);

    cout << "\nTotal monthly cost: $" << monthlyCost << endl;
    cout << "Total annual cost: $" << annualCost << endl;

    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}