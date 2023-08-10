using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_1____supershop_2
{
    class inventory
    {
        public List<department> departmentList = new List<department>();

        public void add_dept(department d)
        {
            departmentList.Add(d); 
        }

        public void add_product(department d, product p)
        {
            foreach(department department in departmentList)
            {
                if(d == department)
                {
                    department.products.Add(p);
                }
            }
        }

        public void remove_product(department d, product p)
        {
            foreach(department dd in departmentList)
            {
                if(dd == d)
                {
                    Console.WriteLine("\nProduct Removing\n");
                    d.products.Remove(p);
                    break;
                }
            }
        }

        public void show_products()
        {
            string q = "Dept \t\tBarcode\t P.name\t Disc-price";
            Console.WriteLine(q);
            foreach (department d in departmentList)
            {
                d.showProduct();
            }
        }

        public void product_count()
        {
            int count = 0;
            foreach (department d in departmentList)
            {
                count += d.product_count();
            }
            if(count == 1)
            {
                Console.WriteLine($"\nThere is {count} products\n");
            }
            else
            {
                Console.WriteLine($"\nThere are {count} products\n");
            }
            
        }

        public void show_depts()
        {
            Console.WriteLine("\n\nCurrent Departments");
            foreach(department d in departmentList)
            {
                Console.WriteLine(d.name);
            }
        }

    }
}
