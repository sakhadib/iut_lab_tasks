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
        public string color;
        bool colormode;

        public canon(string printername)
        {
            this.printername = printername;
            this.color = "Colorful";
            this.colormode = false;
        }

        public canon(string printername, bool colormode)
        {
            this.printername = printername;
            this.color = "Colorful";
            this.colormode = colormode;
        }

        public void print(page page, bool bothside)
        {

            if (bothside)
            {
                if (colormode)
                {
                    this.color = "color";
                    Console.WriteLine($"Printing Bothside {this.color} page in " + this.printername);
                }
                else
                {
                    this.color = "black and white";
                    Console.WriteLine($"printing Bothside {this.color} in " + this.printername);
                }
            }
            else
            {
                if (colormode)
                {
                    this.color = "color";
                    Console.WriteLine($"Printing SingleSide {this.color} page in " + this.printername);
                }
                else
                {
                    this.color = "color";
                    Console.WriteLine($"printing SingleSide {this.color} page in " + this.printername);
                }
            }


        }


    }
}
