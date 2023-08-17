using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace lab_2._1_id_210042106
{
    internal class department
    {
        private List<employee> employees;

        public department() { 
            employees = new List<employee>();
        }

        public void add_employee(employee e)
        {
            employees.Add(e);
        }


    }
}
