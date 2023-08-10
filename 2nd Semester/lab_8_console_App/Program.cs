using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_8
{
    internal class Program
    {
        
        static void Main(string[] args)
        {
            Store MyStore = new Store();
            Manager MichaelScott = new Manager("Michael Scott", 42, 40000);
            SalesAssociate JimHalpert = new SalesAssociate("Jim Halpert", 28, 30000);
            SalesAssociate PamBeesly = new SalesAssociate("Pam Beesly", 25, 30000);
            Console.WriteLine();
            Console.WriteLine();
            MichaelScott.addProduct(1, "Logitech G304", 3400, 10, 2, 5, MyStore);
            MichaelScott.addProduct(2, "AMD Ryzen 3600", 17000, 20, 5, 7, MyStore);
            MichaelScott.addProduct(3, "Nvidia Geforce RTX 3090", 151000, 10, 3, 4, MyStore);
            Console.WriteLine();
            Console.WriteLine();
            JimHalpert.sellProduct(1, 4, MyStore);
            PamBeesly.sellProduct(2, 17, MyStore);
            JimHalpert.sellProduct(1, 10, MyStore);
            Console.WriteLine();
            Console.WriteLine();
            MichaelScott.addExistingProduct(1, 10, MyStore);
            Console.WriteLine();
            Console.WriteLine();
            MyStore.showStoreDetails();
            Console.WriteLine();
            Console.WriteLine();
            JimHalpert.sellProduct(1, 15, MyStore);
            JimHalpert.sellProduct(2, 2, MyStore);
            JimHalpert.sellProduct(3, 9, MyStore);
            Console.WriteLine();
            Console.WriteLine();
            MichaelScott.sendRequisition(MyStore);
            Console.WriteLine();
            Console.WriteLine();
            MichaelScott.showEmployeeInfo();
            JimHalpert.showEmployeeInfo();
            PamBeesly.showEmployeeInfo();

            Console.WriteLine();
            Console.WriteLine();
            MyStore.showStoreDetails();

            Console.ReadLine();
        }
    }
}
