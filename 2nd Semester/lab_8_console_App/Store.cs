using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_8
{
    internal class Store
    {
        public List <product> products = new List<product>();
        public List <Manager> manager = new List<Manager>();
        public List <SalesAssociate> salesAssociates= new List<SalesAssociate>();
        public Store() 
        {
            Console.WriteLine("Store Has been Created");
        }

        public void showStoreDetails()
        {
            foreach(product p in products)
            {
                string s = $"ID : {p.Id}  Product Name : {p.Name}  Price : {p.price}  qty : {p.inventory_level}  Min_qty : {p.inventory_min}  Req Amount : {p.req_lavel}";
                Console.WriteLine(s);
            }
        }
    }
}
