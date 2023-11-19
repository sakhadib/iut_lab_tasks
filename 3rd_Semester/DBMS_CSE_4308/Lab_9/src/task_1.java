import java.sql.*;
public class task_1 {
    public static void main(String[] args) {
        String Username = "Your_Username";
        String Password = "Your_Password";
        String URL = "jdbc:oracle:thin:@localhost:1521:xe";
        
        String t1 = "SELECT COUNT(*) FROM ACCOUNT";
        String t2 = "SELECT COUNT(*) AS Account_Count FROM ( SELECT A_ID, SUM(CASE WHEN TYPE = '0' THEN AMOUNT ELSE 0 END) - SUM(CASE WHEN TYPE = '1' THEN AMOUNT ELSE 0 END) AS Total_Balance, SUM(AMOUNT) AS Total_Amount_of_Transactions FROM TRANSACTIONS GROUP BY A_ID HAVING SUM(AMOUNT) >= 5000000 AND (SUM(CASE WHEN TYPE = '0' THEN AMOUNT ELSE 0 END) - SUM(CASE WHEN TYPE = '1' THEN AMOUNT ELSE 0 END)) >= 1000000) AccountsWithCriteria";

        String t3 = "SELECT COUNT(*) AS Account_Count FROM ( SELECT A_ID, SUM(CASE WHEN TYPE = '0' THEN AMOUNT ELSE 0 END) - SUM(CASE WHEN TYPE = '1' THEN AMOUNT ELSE 0 END) AS Total_Balance, SUM(AMOUNT) AS Total_Amount_of_Transactions FROM TRANSACTIONS GROUP BY A_ID HAVING  (SUM(CASE WHEN TYPE = '0' THEN AMOUNT ELSE 0 END) - SUM(CASE WHEN TYPE = '1' THEN AMOUNT ELSE 0 END) >= 500000 AND (SUM(CASE WHEN TYPE = '0' THEN AMOUNT ELSE 0 END) - SUM(CASE WHEN TYPE = '1' THEN AMOUNT ELSE 0 END) <= 900000) AND SUM(AMOUNT) >= 2500000 AND SUM(AMOUNT) <= 4500000 )) AccountsWithCriteria";

        String t4 = "SELECT COUNT(*) AS Account_Count FROM ( SELECT A_ID, SUM(CASE WHEN TYPE = '0' THEN AMOUNT ELSE 0 END) - SUM(CASE WHEN TYPE = '1' THEN AMOUNT ELSE 0 END) AS Total_Balance, SUM(AMOUNT) AS Total_Amount_of_Transactions FROM TRANSACTIONS GROUP BY A_ID HAVING SUM(AMOUNT) <= 1000000 AND (SUM(CASE WHEN TYPE = '0' THEN AMOUNT ELSE 0 END) - SUM(CASE WHEN TYPE = '1' THEN AMOUNT ELSE 0 END)) <= 1000000 ) AccountsWithCriteria";


        try {
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection connection = DriverManager.getConnection(URL, Username, Password);
            Statement stmt = connection.createStatement();
            ResultSet resultSet_2 = stmt.executeQuery(t1);

            int commercially_important = 0, very_important = 0, ordinary = 0, all = 0, un = 0;
            
            while (resultSet_2.next()) {
                all = resultSet_2.getInt(1);
                System.out.println("Total Accounts : " + all);
            }
            resultSet_2.close();

            ResultSet resultSet_3 = stmt.executeQuery(t2);
            while (resultSet_3.next()) {
                commercially_important = resultSet_3.getInt(1);
                System.out.println("Total CIP Accounts : " + commercially_important);
            }

            resultSet_3.close();
            ResultSet resultSet_4 = stmt.executeQuery(t3);
            while (resultSet_4.next()) {
                very_important = resultSet_4.getInt(1);
                System.out.println("Total VIP Accounts : " + very_important);
            }

            resultSet_4.close();
            ResultSet resultSet_5 = stmt.executeQuery(t4);
            while (resultSet_5.next()) {
                ordinary = resultSet_5.getInt(1);
                System.out.println("Total OP Accounts : " + ordinary);
            }
            un = all - commercially_important - very_important - ordinary;
            System.out.println("Total Unqualified Accounts : " + un);
            
            connection.close();
        }
        catch (SQLException e) {
            System.out.println("Connection Failed : " + e.getMessage());
        }
        catch (ClassNotFoundException e) {
            System.out.println("Driver Not Found : " + e.getMessage());
        }
    }
}