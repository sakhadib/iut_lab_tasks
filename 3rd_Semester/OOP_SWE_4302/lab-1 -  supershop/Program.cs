using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop
{
    internal class Program
    {
        static void Main(string[] args)
        {
            groceryProduct gp = new groceryProduct("gp_1", 100);
            inventory.add_product(gp);
            electronocProduct ep = new electronocProduct("ep_1", 300);
            inventory.add_product(ep);
            clothingProduct cp = new clothingProduct("cp_1", 210);
            inventory.add_product(cp);
            electronocProduct ep2 = new electronocProduct("ep_2", 400);
            inventory.add_product(ep2);
            groceryProduct gp2 = new groceryProduct("gp_2", 100);
            inventory.add_product(gp2);

            
            inventory.show_product();
            inventory.get_product_count();
            inventory.remove_product(3);
            inventory.show_product();

            Console.ReadLine();
        }
    }
}
