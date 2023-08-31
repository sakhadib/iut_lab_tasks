using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_4
{
    public class sevenseater : vehicle
    {
        public sevenseater()
        {

        }

        public bool can_take_trip(int person, int distanceKM)
        {
            return person <= 7 && distanceKM >= 10;
        }

        public int per_head_fare(int distanceKM, int minutes,  int person)
        {
            int fare = distanceKM * 30 / person;
            return fare - (fare % 5);
        }
    }
}
