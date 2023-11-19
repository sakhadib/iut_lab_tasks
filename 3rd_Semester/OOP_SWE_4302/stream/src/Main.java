import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Employee> employees = new EmployeeReader().readEmployees();

        EmployeeUtils eu = new EmployeeUtils();
        System.out.println("Employees with age >= 30:");
        eu.groupByAge(employees, 30);
        System.out.println("\n\n-------------------------------------------------");
        System.out.println("Employees grouped by postal code:");
        eu.groupByCode(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.Avg_remuneration(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.Highest_Remuneration(employees);
        System.out.println("\n\n-------------------------------------------------");
        if(eu.check_manager(employees))
        {
            System.out.println("There is a manager");
        }
        else
        {
            System.out.println("There is no manager");
        }
        System.out.println("\n\n-------------------------------------------------");
        eu.Find_Youngest_employee(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.countUptown(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.printDistinctPostalCode(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.totalCostofRemuneration(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.adultEmployeeCount(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.avarageAgeinDowntown(employees);
        System.out.println("\n\n-------------------------------------------------");
        eu.top3remuneration(employees);
    }


}