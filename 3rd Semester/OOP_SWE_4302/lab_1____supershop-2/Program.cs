using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop_2
{
    class Program
    {
        static void Main(string[] args)
        {
            inventory inventory = new inventory();
            
            department clothing = new department("clothing");
            inventory.add_dept(clothing);
            product c1 = new product(10011, "c_1", 200, 10);
            inventory.add_product(clothing, c1);
            product c2 = new product(11231, "c_2", 400, 10);
            inventory.add_product(clothing, c2);
            product c3 = new product(16441, "c_3", 890, 10);
            inventory.add_product(clothing, c3);

            department electronic = new department("electronic");
            inventory.add_dept(electronic);
            product p1 = new product(11231, "e_1", 400, 15);
            inventory.add_product(electronic, p1);

            inventory.show_products();
            inventory.product_count();
            inventory.remove_product(clothing, c2);
            inventory.show_products();
            inventory.product_count();
            inventory.show_depts();
            Console.ReadLine();
        }
    }
}
