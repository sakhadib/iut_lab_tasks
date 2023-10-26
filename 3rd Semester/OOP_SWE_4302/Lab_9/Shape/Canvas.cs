using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Shape
{
    internal class Canvas
    {

        public Canvas() { }

        public void AddShape<T>(Node<T> node) where T : Shape
        {
            Console.WriteLine("Adding Shape");
        }
    }
}
