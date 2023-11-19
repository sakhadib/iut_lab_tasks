using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2._3_ID_210042106
{
    internal class plane : ticket
    {
        private int flightNumber;
        private int availableSeats;

        public plane(int flightNumber, int availableSeats)
        {
            this.flightNumber = flightNumber;
            this.availableSeats = availableSeats;
        }

        public bool bookTicket(passenger passenger)
        {
            if (availableSeats > 0)
            {
                availableSeats--;
                Console.WriteLine("Ticket booked for passenger " + passenger.getName() + " on Plane " + flightNumber);
                return true;
            }
            else
            {
                Console.WriteLine("No available seats on plane " + flightNumber);
                return false;
            }
        }
    }
}
