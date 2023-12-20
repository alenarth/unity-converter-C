#include <stdio.h>

int main() {
    int c;
    float temp;
    float len;
    float ma;
//Initial prompt

    printf("Hello! Chose the type of convertion that you want: \n");
    printf("1: Temperature(Celsius and Fahrenheit)\n2: Length(Feet and meeter)\n3: Mass(Pounds and Kilograms)\n");
    scanf("%d", &c);

//Temperature
    if (c == 1) {
        int opum;
        printf("1: Celsius to Fahrenheit\n2: Fahrenheit to Celsius\n");
        scanf("%d", &opum);
        //Celsius to Fahrenheit
        if (opum == 1) {
            printf("Celsius:\n");
            scanf("%f", &temp);
            float fah = (9.0 / 5.0 * temp) + 32;
            printf("Fahrenheit: %f\n", fah);
        }
        //Fahrenheit to Celcius
        if (opum == 2) {
            printf("Fahrenheit:\n");
            scanf("%f", &temp);
            float cel = (5.0 / 9.0 * temp) - 32;
            printf("Fahrenheit: %f\n", cel);
        }
    }
//Length
    if (c == 2) {
        int opdoi;
        printf("1: Feet to meeter\n2: Meeter to feet\n");
        scanf("%d", &opdoi);
        //Feet to meeter
        if (opdoi == 1) {
            printf("Feet:\n");
            scanf("%f", &len);
            float met = len * 0.3048;
            printf("Meeters: %f\n", met);
        }
        //Meeter to feet
        if (opdoi == 2) {
            printf("Meeter:\n");
            scanf("%f", &len);
            float fee = (len / 0.3048);
            printf("Feet: %f\n", fee);
        }
    }
//Mass
    if (c == 3) {
        int optre;
        printf("1: Pounds to Kilograms\n2: Kilograms to Pounds\n");
        scanf("%d", &optre);
        //Pounds do Kilograms
        if (optre == 1) {
            printf("Pounds:\n");
            scanf("%f", &ma);
            float kil = ma * 0.453592;
            printf("Kilograms: %f\n", kil);
        }
        //Kilograms to Pounds
        if (optre == 2) {
            printf("Kilograms:\n");
            scanf("%f", &ma);
            float pou = (ma * 2.20462);
            printf("Pounds: %f\n", pou);
        }

        return 0;
    }
}