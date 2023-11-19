using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp1
{
    public class canvas
    {
        public canvas() { }

        public string draw(shape s)
        {
            return s.draw();
        }

        public string draw(List<shape> shapes)
        {
            string drawing = "";
            foreach(shape shape in shapes)
            {
                drawing = drawing + shape.draw() + "\n";
            }
            return drawing;
        }

    }
}
