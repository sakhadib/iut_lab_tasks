using Lab_4;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_4
{
    public class trip
    {
        private vehicle vehicleType;
        private int distanceKM;
        private int timeMinutes;
        private int numberOfPassengers;

        public trip(vehicle vehicleType, int distanceKM, int timeMinutes, int numberOfPassengers)
        {
            this.vehicleType = vehicleType;
            this.distanceKM = distanceKM;
            this.timeMinutes = timeMinutes;
            this.numberOfPassengers = numberOfPassengers;
        }

        public int perHeadFare()
        {
            int fare = vehicleType.per_head_fare(distanceKM,timeMinutes,numberOfPassengers);
            return fare;
        }

        public bool canTakeTrip()
        {
            if (numberOfPassengers < 1)
                return false;

            bool can_trip = vehicleType.can_take_trip(numberOfPassengers, distanceKM);
            return can_trip;
        }
    }
}
