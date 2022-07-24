#include <stdio.h>
int main()
{
    float unit, amt;

    while (unit != 0)
    {
        printf("\nPlease Enter the Unit of Eletricity Consumed: ");
        scanf("%f", &unit);
        if (unit <= 200 && unit > 0)
        { // unit x 0.8 + 100(Meter Charge) = charge of electricity
            amt = unit * 0.8 + 100;
            // if Charge is more than 400 Rs then add additional surcharge of 15% of total amount
            if (amt > 400)
            {
                amt = amt + amt * 0.15;
            }
            printf("\nYour Charges are %0.2f Rs\n", amt);
            printf("If you want to Quit then please Enter 0");
        }
        else if (unit > 200 && unit < 300)
        { // 200 x 0.8(Below 200 unit 80 paise) + 100 x 0.9(Above 200 units 90 paise) + 100(Meter Charge) = charge of electricity
            amt = 200 * 0.8 + (unit - 200) * 0.9 + 100;
            // if Charge is more than 400 Rs then add additional surcharge of 15% of total amount
            if (amt > 400)
            {
                amt = amt + amt * 0.15;
            }
            printf("\nYour Charges are %0.2f Rs\n", amt);
            printf("If you want to Quit then please Enter 0");
        }
        else if (unit > 300)
        { // 200 x 0.8(Below 200 unit 80 paise) + 100 x 0.9(Above 200 units 90 paise) + (unit - 300) x 1.00(Above 300 units 1 rupee) + 100(Meter Charge) = charge of electricity
            amt = 200 * 0.8 + 100 * 0.9 + (unit - 300) * 1.0 + 100;
            // if Charge is more than 400 Rs then add additional surcharge of 15% of total amount
            if (amt > 400)
            {
                amt = amt + amt * 0.15;
            }
            printf("\nYour Charges are %0.2f Rs\n", amt);
            printf("If you want to Quit then please Enter 0");
        }
        else
        {
            unit = 0;
            printf("Sorry the unit is too low..\n");
        }
    }
}
