using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Bonus_Assignment_210042106
{
    class Lecturer : Teacher
    {
        
        public int quarter_room;
        public Lecturer() 
        {
            
        }

        public string isresidant()
        {
            if (quarter_room>0)
                return $"Residant in Room no - {quarter_room}";
            else
                return "Non_Residant";
        }
    }
}
