using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop_2
{
    class department
    {
        public string name;
        public List<product> products;

        public department(string name)
        {
            this.name = name;
            products = new List<product>();
        }

        public void showProduct()
        {
            
            foreach(product p in products)
            {
                string s = $"{name}\t{p.barcode}\t{p.name}\t{p.dsc_price()}";
                Console.WriteLine(s);
            }
        }

        public int product_count()
        {
            return products.Count();
        }
    }
}
