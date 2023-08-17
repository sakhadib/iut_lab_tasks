using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2._2_ID_210042106
{
    internal class Program
    {
        static void Main(string[] args)
        {

        }
    }

    class engine
    {
        string model;
        int capacity;
    }

    class wheel
    {
        string color;
    }

    class car
    {
        private engine engine;
        private wheel[] wheels;

        public car()
        {
            engine = new engine();
            wheels = new wheel[4];
            for(int i = 0; i < 4; i++)
            {
                wheels[i] = new wheel();
            }
        }
        
        //Car specific methods
    }
}
