using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_4
{
    public class motorbike : vehicle
    {
        public motorbike()
        {

        }

        public bool can_take_trip(int person, int distanceKM)
        {
            return false;
        }

        public int per_head_fare(int distanceKM, int minutes, int person)
        {
            int fare = Math.Max(25, distanceKM * 20) / person;
            return fare - (fare % 5);
        }
    }
}
