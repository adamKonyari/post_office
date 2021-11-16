#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void readWeight(float *num, int index);
int calculateShippingFee(int weight);

int main() {
    int const packageVolume = 10;
    float packages[packageVolume];

    for (int i = 0; i < packageVolume; i++) {
        readWeight(&packages[i], i + 1);
    }

    int counter = 0;
    for (int i = 0; i < packageVolume; i++) {
        int shippingFee = calculateShippingFee(packages[i]);
        printf("A(z) %d. csomag bérmentesítési díja: %d\n", i + 1, shippingFee);

        if (shippingFee == 0) {
            counter++;
        }
    }

    if (counter) {
        printf("%d csomagot nem vett fel a posta.", counter);
    }

    return EXIT_SUCCESS;
}

void readWeight(float *num, int index) {
    bool isReadingSuccessful = false;
    char ch;
    float weight;

    do {
        printf("Kérem adja meg a(z) %d. csomag súlyát (max 25kg): ", index);
        if (scanf("%f", &weight) != 1) {
            printf("Beolvasási hiba\n");
            while ((ch = getchar()) != '\n');
        } else if (weight < 0 || weight > 25) {
            printf("A csomag súlya legfeljebb 25 kg lehet.\n");
        } else {
            isReadingSuccessful = true;
            *num = floor(pow(10, 1) * weight) / pow(10, 1);
        }
    } while (!isReadingSuccessful);
}

int calculateShippingFee(int weight) {
    if (weight <= 2) {
        return 1630;
    } else if (weight <= 5) {
        return 1850;
    } else if (weight <= 10) {
        return 1960;
    } else if (weight <= 20) {
        return (2180);
    }

    return 0;
}