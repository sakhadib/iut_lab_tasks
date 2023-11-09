import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class EmployeeReader {

    /**
     * Reads employees from a CSV file
     * @return a list of employees
     */
    public List<Employee> readEmployees() {
        List<Employee> employees = new ArrayList<>();
        String filename = "F:\\iut-lab\\3rd_Semester\\OOP_SWE_4302\\stream\\employee_data.csv";
        try {
            BufferedReader reader = new BufferedReader(new FileReader(filename));
            String line = reader.readLine();
            while (line != null) {
                String[] tokens = line.split(",");
                String firstName = tokens[0];
                String lastName = tokens[1];
                String postalCode = tokens[2];
                String street = tokens[3];
                String district = tokens[4];
                int age = Integer.parseInt(tokens[5]);
                String designation = tokens[6];
                double remuneration = Double.parseDouble(tokens[7]);
                Employee employee = new Employee(firstName, lastName, postalCode, street, district, age, designation, remuneration);
                employees.add(employee);
                line = reader.readLine();
            }
            reader.close();
        } catch (IOException e) {
            System.out.println("Error reading file: " + e.getMessage());
        }
        return employees;
    }
}
