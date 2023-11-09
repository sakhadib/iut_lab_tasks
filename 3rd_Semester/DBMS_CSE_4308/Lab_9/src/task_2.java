import java.sql.*;
public class task_2 {
    public static void main(String args[]) {
        String Username = "your_username";
        String Password = "your_password";
        String URL = "jdbc:oracle:thin:@localhost:1521:xe";

        try{
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection connection = DriverManager.getConnection(URL, Username, Password);
            Statement statement = connection.createStatement();
            PreparedStatement prepStatement = connection.prepareStatement("insert into TRANSACTIONS values (? ,? ,? ,?, ?)");
            prepStatement.setInt(1, 1681);
            prepStatement.setDate(2, Date.valueOf("2020-01-01"));
            prepStatement.setInt(3, 291);
            prepStatement.setInt(4, 116335);
            prepStatement.setInt(5, 0);

            prepStatement.executeUpdate();
        }

        catch(SQLException exp){
            System.out.println(exp);
        }
        catch(ClassNotFoundException exp){
            System.out.println(exp);
        }
    }
}
