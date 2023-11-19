using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_4
{
    public interface vehicle
    {
        int per_head_fare(int distanceKM, int minutes, int person);
        bool can_take_trip(int person, int distanceKM);
    }
}
