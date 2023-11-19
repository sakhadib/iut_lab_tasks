import java.sql.*;

public class main {
    public static void main(String[] args) {
        String Username = "Your_Username";
        String Password = "Your_Password";
        String URL = "jdbc:oracle:thin:@localhost:1521:xe";

        String Query = "";

        try{
            Class.forName("oracle.jdbc.driver.OracleDriver");
            Connection connection = DriverManager.getConnection(URL, Username, Password);

            Statement stmt = connection.createStatement();

            // put your code here

            stmt.close();
            connection.close();
        }
        catch(SQLException e){
            System.out.println("Connection Failed : " + e.getMessage());
        }
        catch(ClassNotFoundException e){
            System.out.println("Driver Not Found : " + e.getMessage());
        }
    }
}
