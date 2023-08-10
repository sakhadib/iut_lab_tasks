using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop
{
    internal class groceryProduct : product
    {
        private static double discount = 0;
        

        public groceryProduct(string name, double price)
        {
            this.id = inventory.overall_id;
            inventory.overall_id++;
            this.name = name;
            this.price = price;
            this.type = "grocery";
        }

        public override void set_discount(double value)
        {
            if (value <= 100)
            {
                discount = value;
            }
            else
            {
                Console.WriteLine("discount can not be more than 100 %");
            }
        }

        public override double disc_price()
        {
            double disc_price = price - price * (discount / 100);
            return disc_price;
        }
    }
}
