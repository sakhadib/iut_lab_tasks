using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace employeeTask_1
{
    internal class Program
    {
        static void Main(string[] args)
        {
            EmployeeController employeeController = EmployeeController.GetController();
            
            Employee employee2 = new Employee("Harry", 10000, 1200, "Senior Engineer", new DateTime(2021, 8, 22));
            Employee employee3 = new Employee("Tom", 10000, 1200, "Engineer", new DateTime(2021, 8, 22));
            Employee employee4 = new Employee("Riddle", 10000, 1200, "Junior Manager", new DateTime(2021, 8, 22));
            employeeController.HireEmployee(employee2);
            employeeController.HireEmployee(employee3);
            employeeController.HireEmployee(employee4);

            Employee employee5 = employeeController.UpdateEmployee(employee3, "Ronald");
            employeeController.Findemployee("Ronald");

            ReportGenarator reportGenarator = new ReportGenarator();
            reportGenarator.GenerateReport();



            Console.ReadLine();
        }
    }
}
