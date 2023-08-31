using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace bottle_of_oop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            bottle b = new bottle();
            Console.WriteLine(b.verse(99));
            Console.Read();
        }
    }
}
