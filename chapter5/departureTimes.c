#include <stdio.h>

int main(void)
{
    int hours, minutes, conversion, nextDiff, 
        currentDiff, currentClosestDeparture,
        currentClosestArrival, departureHours,
        departureMinutes, arrivalHours, arrivalMinutes;
    int firstDepartureConversion = 8 * 60;
    int firstArrivalConversion = 10 * 60 + 16;
    int secondDepartureConversion = 9 * 60 + 45;
    int secondArrivalConversion = 11 * 60 + 52;
    int thirdDepartureConversion = 11 * 60 + 19;
    int thirdArrivalConversion = 13 * 60 + 31;
    int fourthDepartureConversion = 12 * 60 + 47;
    int fourthArrivalConversion = 15 * 60;
    int fifthDepartureConversion = 14 * 60;
    int fifthArrivalConversion = 16 * 60 + 8;
    int sixthDepartureConversion = 15 * 60 + 45;
    int sixthArrivalConversion = 17 * 60 + 55;
    int seventhDepartureConversion = 19 * 60;
    int seventhArrivalConversion = 21 * 60 + 20;
    int eigthDepartureConversion = 21 * 60 + 45;
    int eigthArrivalConversion = 23 * 60 + 58;
    printf("Enter a 24h time (hh:mm) ");
    scanf("%d:%d", &hours, &minutes);
    conversion = hours * 60 + minutes;
    nextDiff = firstDepartureConversion - conversion;
    if (nextDiff < 0)
        nextDiff *= -1;
    currentDiff = nextDiff;
    currentClosestDeparture = firstDepartureConversion;
    currentClosestArrival = firstArrivalConversion;
    nextDiff = secondDepartureConversion - conversion;
    if (nextDiff < 0)
        nextDiff *= -1;
    if (nextDiff < currentDiff) {
        currentDiff = nextDiff;
        currentClosestDeparture = secondDepartureConversion;
        currentClosestArrival = secondArrivalConversion;
        nextDiff = thirdDepartureConversion - conversion;
        if (nextDiff < 0)
            nextDiff *= -1;
    } 
    if (nextDiff < currentDiff) {
        currentDiff = nextDiff;
        currentClosestDeparture = thirdDepartureConversion;
        currentClosestArrival = thirdArrivalConversion;
        nextDiff = fourthDepartureConversion - conversion;
        if (nextDiff < 0)
            nextDiff *= -1;
    }
    if (nextDiff < currentDiff) {
        currentDiff = nextDiff;
        currentClosestDeparture = fourthDepartureConversion;
        currentClosestArrival = fourthArrivalConversion;
        nextDiff = fifthDepartureConversion - conversion;
        if (nextDiff < 0)
            nextDiff *= -1;
    }
    if (nextDiff < currentDiff) {
        currentDiff = nextDiff;
        currentClosestDeparture = fifthDepartureConversion;
        currentClosestArrival = fifthArrivalConversion;
        nextDiff = sixthDepartureConversion - conversion;
        if (nextDiff < 0)
            nextDiff *= -1;
    }
    if (nextDiff < currentDiff) {
        currentDiff = nextDiff;
        currentClosestDeparture = sixthDepartureConversion;
        currentClosestArrival = sixthArrivalConversion;
        nextDiff = seventhDepartureConversion - conversion;
        if (nextDiff < 0)
            nextDiff *= -1;
    }
    if (nextDiff < currentDiff) {
        currentDiff = nextDiff;
        currentClosestDeparture = seventhDepartureConversion;
        currentClosestArrival = seventhArrivalConversion;
        nextDiff = eigthDepartureConversion - conversion;
        if (nextDiff < 0)
            nextDiff *= -1;
    }
    if (nextDiff < currentDiff) {
        currentClosestDeparture = eigthDepartureConversion;
        currentClosestArrival = eigthArrivalConversion;
    }
    departureHours = currentClosestDeparture / 60;
    departureMinutes = currentClosestDeparture - departureHours * 60;
    arrivalHours = currentClosestArrival / 60;
    arrivalMinutes = currentClosestArrival - arrivalHours * 60;

    if (departureHours < 12)
        printf("Closest departure time is %2d:%2d a.m., ", departureHours, departureMinutes);
    else
        printf("Closest departure time is %2d:%2d p.m., ", departureHours, departureMinutes);

    if (arrivalHours < 12)
        printf("arriving at %2.2d:%2.2d a.m.\n", arrivalHours, arrivalMinutes);
    else
        printf("arriving at %2.2d:%2.2d p.m.\n", arrivalHours, arrivalMinutes);
    return 0;
}
