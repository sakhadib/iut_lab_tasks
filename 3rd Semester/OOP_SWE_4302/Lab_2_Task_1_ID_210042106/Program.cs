using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab_2_Task_1_ID_210042106
{
    internal class Program
    {
        static void Main(string[] args)
        {
            page a4 = new page("A4");
            page A3 = new page("A3");

            colorMode bw = new colorMode("Black and White");
            colorMode color = new colorMode("Colorful");

            epson epson = new epson("epson printer");
            canon canon = new canon("canon printer");

            printJob.print(epson, a4);
            printJob.print(epson, A3, color);
            printJob.print(canon, a4, bw);
            printJob.print(canon, A3, color);
            printJob.print(canon, a4);

            Console.ReadLine();
        }
    }
}
