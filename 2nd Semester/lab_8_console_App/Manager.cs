using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_8
{
    internal class Manager : employee
    {
        
        public Manager(string name, int age, double salary)
        {
            this.name = name;
            this.age = age;
            this.salary = salary;

            Console.WriteLine("Manager has been added");
            string s = $"Name : {name} -- Age : {age} -- Salary {salary}:";
            Console.WriteLine(s);
        }

        public void addExistingProduct(int id, int amount, Store s)
        {
            foreach(product p in s.products)
            {
                p.inventory_level += amount;
                Console.WriteLine($"- Added {amount} pieces of {p.Name} -");
            }
        }

        public void addProduct(int id, string name, double price, int qty, int min_qty, int req, Store s)
        {
            product p = new product(id, name, price, qty, min_qty, req);
            Console.WriteLine("Product has been Added");
            string k = $"ID : {p.Id}  Product Name : {p.Name}  Price : {p.price}  qty : {p.inventory_level}  Min_qty : {p.inventory_min}  Req Amount : {p.req_lavel}";
            Console.WriteLine(k);
            s.products.Add(p);
        }

        public override void showEmployeeInfo()
        {
            string s = $"\n\nName : {name} -- Age : {age} -- Salary {salary}:";
            Console.WriteLine(s);
        }

        public void sendRequisition(Store s)
        {
            foreach(product p in s.products)
            {
                if (p.inventory_level < p.inventory_min)
                {
                    Console.WriteLine($"Added {p.req_lavel} pieces of {p.Name}");
                    p.inventory_level += p.req_lavel;
                }
            }
        }
    }
}
