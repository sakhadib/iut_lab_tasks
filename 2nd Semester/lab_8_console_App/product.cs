using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_8
{
    internal class product
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public double price { get; set; }
        public int inventory_level { get; set; }
        public int inventory_min { get; set; }
        public int req_lavel { get; set; }

        public product(int id, string name, double price, int inventory_level, int inventory_min, int req_lavel)
        {
            Id = id;
            Name = name;
            this.price = price;
            this.inventory_level = inventory_level;
            this.inventory_min = inventory_min;
            this.req_lavel = req_lavel;
        }
        
    }
}
