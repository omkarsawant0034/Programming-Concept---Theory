import java.sql.*;

class Database {
    public static void main(String args[]) throws Exception 
    {
        Connection cobj = DriverManager.getConnection("jdbc:mysql://localhost:3306/ppa", "root", ""); 
        Statement sobj = cobj.createStatement();
        ResultSet robj = sobj.executeQuery("SELECT * FROM student");

        while (robj.next()) {
            System.out.println("RID: " + robj.getInt("rno"));
            System.out.println("NAME: " + robj.getString("name"));
            System.out.println("MARKS: " + robj.getInt("marks"));   
            System.out.println("ADDRESS: " + robj.getString("address"));
            System.out.println();
        }
    }
}
