using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace shape_without_ocp
{
    internal class canvas
    {
        public string draw(shapeType s)
        {
            if (s == shapeType.circle)
            {
                return "Drawing Circle";
            }
            else if (s == shapeType.square)
            {
                return "Drawing square";
            }
            else
            {
                return "Drawing rectangle";
            }
        }

        public double area(shapeType s, int x, int y, int width)
        {
            if (s == shapeType.circle)
            {
                return (3.1416 * width * width);
            }
            else
            {
                return width * width;
            }

        }

        public double area (shapeType s, int x, int y, double width, double height)
        {
            return width * height;
        }
    }
}
