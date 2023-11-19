using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class circle : shape
    {
        public point center;

        public int radius;

        public circle(point center, int radius)
        {
            this.center = center;
            this.radius = radius;
        }

        public string draw()
        {
            return "Drawing Circle";
        }

        public double area()
        {
            double area = 3.1416 * radius * radius;
            return area;
        }
    }
}
