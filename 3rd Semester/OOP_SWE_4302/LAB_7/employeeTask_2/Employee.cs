using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace employeeTask_1
{
    public class Employee
    {
        public string Name { get; set; }
        public double Salary { get; set; }
        public double BasicSalary { get; set; }
        public double Bonus { get; set; }
        public string Designation { get; set; }
        public DateTime DateOfJoining { get; set; }
        public double HouseAllowance { get; set; }
        public double TransportAllowance { get; private set; }
        public double CostOfLiving { get; private set; }

        public Employee() { }

        public Employee(string name, double salary)
        {
            this.Name = name;
            this.Salary = salary;
        }

        public Employee(string name, double basicSalary, string designation)
        {
            Name = name;
            BasicSalary = basicSalary;
            HouseAllowance = basicSalary * 0.4;  
            TransportAllowance = 5000;
            CostOfLiving = 1000;
            Designation = designation;
            DateOfJoining = DateTime.Now;
        }

        public Employee(string name, double basicSalary, double bonus, string designation, DateTime dateOfJoining)
        {
            Name = name;
            BasicSalary = basicSalary;
            Bonus = bonus;
            Designation = designation;
            DateOfJoining = dateOfJoining;
        }

        public double getSalary()
        {
            return BasicSalary + HouseAllowance + TransportAllowance + CostOfLiving + Bonus;
        }

        public double CalculateSalary()
        {
            HouseAllowance = 0.4 * BasicSalary;
            TransportAllowance = 5000;
            CostOfLiving = 800;
            return getSalary();
        }
    }

    public class EmployeeController
    {
        private List<Employee> employees = new List<Employee>();

        public static EmployeeController employeeController;

        private EmployeeController()
        {        }

        public static EmployeeController GetController()
        {
            if(employeeController == null)
            {
                employeeController = new EmployeeController();
                return employeeController;
            }
            return employeeController;
        }

        public void HireEmployee(Employee employee)
        {
            employees.Add(employee);
        }

        //Task 3
        public void DeleteEmployee(Employee e)
        {
            employees.Remove(e);
        }

        public Employee UpdateEmployee(Employee e, string name)
        {
            e.Name = name;
            return e;
        }

        public void Findemployee(string name)
        {
            foreach( Employee employee in employees)
            {
                if(employee.Name == name)
                {
                    string details = $"Name : {employee.Name}\nDesignation :{employee.Designation}\nBasic Salary : {employee.BasicSalary}";
                    Console.WriteLine(details);
                }
            }
        }

        public List<Employee> GetAllEmployees()
        {
            return employees;
        }

    }

}
