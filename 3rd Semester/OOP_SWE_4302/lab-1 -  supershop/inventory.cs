using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop
{
    internal static class inventory
    {
        public static List<product> products = new List<product>();
        public static int overall_id = 1;
        public static void add_product(product p)
        {
            products.Add(p);
            // Console.WriteLine($"{p.id}\t{p.name}\t{p.price}\t{p.type}");
        }

        public static void show_product()
        {
            Console.WriteLine("\n\nCurrent Product List\n\n");
            foreach (var p in products)
            {
                Console.WriteLine($"{p.id}\t{p.name}\t{p.price}\t{p.disc_price()}\t{p.type}");
            }
        }

        public static void remove_product(int id)
        {
            for(int i =  0; i < products.Count; i++)
            {
                if (products[i].id == id)
                {
                    products.RemoveAt(i);
                    Console.WriteLine("\nRemoving product for id - " + id);
                    break;
                }
            }
        }

        public static void get_product_count()
        {
            int count = products.Count();
            Console.WriteLine("Total count of product is - " + count);
        }
    }
}
