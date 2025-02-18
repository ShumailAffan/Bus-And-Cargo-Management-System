#ifndef BUS_H
#define BUS_H

#include <iostream>

using namespace std;

// CLASS BUS
class Bus
{
private:
    int maxSeats, bookedSeats;
    double busFare;
    char busNo[10], DepartureFrom[20], destination[20], DepartureFromTime[20], destinationTime[20];

public:
    Bus()
    {
        strcpy(busNo, "");
        maxSeats = 32;
        bookedSeats = 0;
        busFare = 0.0;
        strcpy(DepartureFrom, "");
        strcpy(destination, "");
        strcpy(DepartureFromTime, "");
        strcpy(destinationTime, "");
    }

    // METHODS
    void addBus();
    void showAllBus();
    void showBusDetails();
    void viewBusDetails();
    void deleteBus();
    void editBus();

    // GETTERS
    char *getBusNo()
    {
        return busNo;
    }

    char *getDepartureFrom()
    {

        return DepartureFrom;
    }

    char *getDestination()
    {
        return destination;
    }

    char *getDepartureFromTime()
    {
        return DepartureFromTime;
    }

    char *getDestinationTime()
    {
        return destinationTime;
    }

    int getBookedSeats()
    {
        return bookedSeats;
    }

    int getMaxSeats()
    {
        return maxSeats;
    }

    double getBusFare()
    {
        return busFare;
    }

    // SETTERS
    void setBookedSeats()
    {
        bookedSeats++;
    }

    void setCancelTicket()
    {
        bookedSeats--;
    }

    void setDepartureFrom(char *s)
    {
        if (s && s[0])
            strcpy(DepartureFrom, s);
    }

    void setDestination(char *d)
    {
        if (d && d[0])
            strcpy(destination, d);
    }

    void setDepartureFromTime(char *s)
    {
        if (s && s[0])
            strcpy(DepartureFromTime, s);
    }

    void setDestinationTime(char *d)
    {
        if (d && d[0])
            strcpy(destinationTime, d);
    }

    void setBusFare(double f)
    {
        if (f)
            busFare = f;
    }
};
#endif // !BUS_H
