import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

public class EmployeeUtils {

    /**
     * Prints employees with age >= age
     * @param employees list of employees
     * @param age age to compare
     */
    public void groupByAge(List<Employee> employees, int age) {
        for(Employee employee: employees) {
            if(employee.age >= age) {
                System.out.println(employee.firstName + " " + employee.lastName + " - " + employee.age);
            }
        }
    }

    /**
     * Prints employees grouped by postal code
     * @param employees list of employees
     */
    public void groupByCode(List<Employee> employees) {
        Map<String, List<Employee>> employeesByPostalCode = employees.stream()
                .collect(Collectors.groupingBy(Employee::getPostalCode));

        employeesByPostalCode.forEach((postalCode, employeeList) -> {
            System.out.println("Postal Code: " + postalCode);
            employeeList.forEach(employee -> System.out.println(employee.firstName + " " + employee.lastName));
            System.out.println("------");
        });
    }

    /**
     * Prints the average remuneration of employees
     * @param employees
     */
    public void Avg_remuneration(List<Employee> employees)
    {
        double sum = 0;
        for (Employee employee : employees)
        {
            sum += employee.remuneration;
        }
        System.out.println("Avarage remuneration : " + sum / employees.size());
    }

    /**
     * Prints the employee with the highest remuneration
     * @param employees
     */
    public void Highest_Remuneration(List<Employee> employees)
    {
        double highest = 0;
        Employee e = null;
        for (Employee employee : employees)
        {
            if (employee.remuneration > highest)
            {
                highest = employee.remuneration;
                e= employee;
            }
        }
        System.out.println("Highest remuneration : " + e.firstName + " " + e.lastName + " " + e.remuneration);
    }

    /**
     * Checks if there is a manager in the list of employees
     * @param employees
     * @return true if there is a manager, false otherwise
     */
    public boolean check_manager(List<Employee> employees)
    {
        for (Employee employee : employees)
        {
            if (employee.designation.equals("Manager"))
            {
                return true;
            }
        }
        return false;
    }

    /**
     * Sorts the list of employees by age in ascending order
     * @param employees
     */
    public void Sort_By_Age(List<Employee> employees)
    {
        for (int i = 0; i < employees.size(); i++)
        {
            for (int j = 0; j < employees.size() - 1; j++)
            {
                if (employees.get(j).age > employees.get(j + 1).age)
                {
                    Employee temp = employees.get(j);
                    employees.set(j, employees.get(j + 1));
                    employees.set(j + 1, temp);
                }
            }
        }
        System.out.println("Sorted by age ascending");
    }

    /**
     * Sorts the list of employees by age in descending order
     * @param employees
     */
    public void Sort_By_Age_descending(List<Employee> employees)
    {
        for (int i = 0; i < employees.size(); i++)
        {
            for (int j = 0; j < employees.size() - 1; j++)
            {
                if (employees.get(j).age < employees.get(j + 1).age)
                {
                    Employee temp = employees.get(j);
                    employees.set(j, employees.get(j + 1));
                    employees.set(j + 1, temp);
                }
            }
        }
        System.out.println("Sorted by age descending");
    }

    /**
     * Finds the youngest employee(s) in the list of employees
     * @param employees
     */
    public void Find_Youngest_employee(List<Employee> employees)
    {
        int youngest = employees.get(0).age;
        for (Employee employee : employees)
        {
            if (employee.age < youngest)
            {
                youngest = employee.age;
            }
        }
        for (Employee employee : employees)
        {
            if (employee.age == youngest)
            {
                System.out.println(employee.firstName + " " + employee.lastName + " " + employee.age);
            }
        }
    }


    public void countUptown(List<Employee> employees)
    {
        int count = 0;
        for (Employee employee : employees)
        {
            if (employee.district.equals("Uptown"))
            {
                count++;
            }
        }
        System.out.println("Number of employees in uptown : " + count);
    }

    public void printDistinctPostalCode(List<Employee> employees)
    {
        List<String> distinctPostalCodes = employees.stream()
                .map(Employee::getPostalCode)
                .distinct()
                .collect(Collectors.toList());

        System.out.println("Distinct postal codes: " + distinctPostalCodes);
    }

    public void totalCostofRemuneration(List<Employee> employees)
    {
        double sum = 0;
        for (Employee employee : employees)
        {
            sum += employee.remuneration;
        }
        System.out.println("Total cost of remuneration : " + sum);
    }

    public void adultEmployeeCount(List<Employee> employees)
    {
        int count = 0;
        for (Employee employee : employees)
        {
            if (employee.age >= 18)
            {
                count++;
            }
        }
        System.out.println("Number of adult employees : " + count);
    }

    public void avarageAgeinDowntown(List<Employee> employees)
    {
        int sum = 0;
        int count = 0;
        for (Employee employee : employees)
        {
            if (employee.district.equals("Downtown"))
            {
                sum += employee.age;
                count++;
            }
        }
        System.out.println("Avarage age in downtown : " + sum / count);
    }

    public void top3remuneration(List<Employee> employees)
    {
        for (int i = 0; i < employees.size(); i++)
        {
            for (int j = 0; j < employees.size() - 1; j++)
            {
                if (employees.get(j).remuneration < employees.get(j + 1).remuneration)
                {
                    Employee temp = employees.get(j);
                    employees.set(j, employees.get(j + 1));
                    employees.set(j + 1, temp);
                }
            }
        }
        System.out.println("Top 3 remuneration : ");
        for (int i = 0; i < 3; i++)
        {
            System.out.println(employees.get(i).firstName + " " + employees.get(i).lastName + " " + employees.get(i).remuneration);
        }
    }
}
