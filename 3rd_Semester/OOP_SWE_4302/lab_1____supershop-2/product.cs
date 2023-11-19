using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop_2
{
    class product
    {
        public int barcode;
        public string name;
        public double price;
        public double discount;

        public product(int barcode, string name, double price, double discount)
        {
            this.barcode = barcode;
            this.name = name;
            this.price = price;
            if(discount > 0 &&  discount <= 100)
            {
                this.discount = discount;
            } 
        }

        public double dsc_price()
        {
            double pp = price - price * (discount / 100);
            return pp;
        }
    }
}
