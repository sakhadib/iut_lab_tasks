using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2._3_ID_210042106
{
    internal class passenger
    {
        private int id;
        private string name;

        public passenger(int id, string name)
        {
            this.id = id;
            this.name = name;
        }

        public int getId() 
        { 
            return id; 
        }

        public string getName()
        {
            return name;
        }



    }
}
