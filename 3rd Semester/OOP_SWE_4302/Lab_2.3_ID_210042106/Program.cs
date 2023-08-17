using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2._3_ID_210042106
{
    internal class Program
    {
        static void Main(string[] args)
        {
            passenger passenger1 = new passenger(1, "Alice");
            passenger passenger2 = new passenger(2, "Bob");

            train train = new train(123, 50);
            plane plane = new plane(456, 100);

            bookManager.bookTicket(train, passenger1);
            bookManager.bookTicket(plane, passenger2);

            Console.ReadKey();
        }
    }
}
