using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class square : shape
    {
        public double sideLen { get; set; }
        public point topLeft { get; set; }

        public square(point topLeft, double sideLen)
        {
            this.sideLen = sideLen;
            this.topLeft = topLeft;
        }

        public string draw()
        {
            return "Drawing Square";
        }

        public double area()
        {
            double area = this.sideLen * this.sideLen;
            return area;
        }

    }
}
