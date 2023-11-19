using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2._3_ID_210042106
{
    internal class train : ticket
    {
        private int trainNumber;
        private int availableSeats;

        public train(int trainNumber, int availableSeats)
        {
            this.trainNumber = trainNumber;
            this.availableSeats = availableSeats;
        }

        public bool bookTicket(passenger passenger)
        {
            if(availableSeats > 0)
            {
                availableSeats--;
                Console.WriteLine("Ticket booked for passenger " + passenger.getName() + " on train " + trainNumber);
                return true;
            }
            else
            {
                Console.WriteLine("No available seats on train " + trainNumber);
                return false;
            }
        }
    }
}
