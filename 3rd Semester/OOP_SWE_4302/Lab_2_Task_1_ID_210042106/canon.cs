using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2_Task_1_ID_210042106
{
    internal class canon : printer
    {

        public string printername;

        public canon(string printername)
        {
            this.printername = printername;
        }

        public void print(page page, colorMode color)
        {
            Console.WriteLine("Printing " + page.get_page() + " in " + color.get_color() + " by " + this.printername);
        }

        public void print(page page)
        {
            Console.WriteLine("Printing " + page.get_page() + " in Colorful" + " by " + this.printername);
        }
    }
}
