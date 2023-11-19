using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_4
{
    public class sedan : vehicle
    {
        public sedan()
        {

        }

        public bool can_take_trip(int person, int distanceKM)
        {
            return person <= 4 && distanceKM <= 25;
        }

        public int per_head_fare(int distanceKM, int minutes, int person)
        {
            int fare = (50 + distanceKM * 30 + minutes * 2) / person;
            return fare - (fare % 5);
        }

    }
}
