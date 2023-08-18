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

            epson epson = new epson("epson printer");
            canon canon = new canon("canon printer");

            printJob.print(epson, a4, true);
            printJob.print(epson, A3, false);
            printJob.print(canon, a4, true);
            printJob.print(canon, A3, false);
            printJob.print(canon, a4, true);

            Console.ReadLine();
        }
    }
}
