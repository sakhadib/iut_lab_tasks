using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;

namespace ConsoleApp1
{
    public class rectangle : shape
    {
        public point topLeft { get; set; }
        public double length { get; set; }
        public double width { get; set; }

        public rectangle(point topLeft, double length, double width)
        {
            this.topLeft = topLeft;
            this.length = length;
            this.width = width;
        }

        public string draw()
        {
            return "Drawing Rectangle";
        }

        public double area()
        {
            double area = length * width;
            return area;
        }
    }
}
