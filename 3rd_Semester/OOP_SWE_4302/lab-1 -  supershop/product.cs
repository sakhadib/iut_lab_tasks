using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop
{
    internal abstract class product
    {
        public int id { get; set; }
        public string name { get; set; }
        public string barcode { get; set; }
        public double price { get; set; }

        public string type;

        public abstract void set_discount(double value);
        public abstract double disc_price();
        

        
    }
}
