
package modelo;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class Conexion {
    private static final String driver= "com.mysql.jdbc.Driver";
    private static final String user ="root";
    private static final String password = "mama0992";
    private static final String url = "jdbc:mysql://localhost:3306/proyecto1factura";
    private Connection con=null;
    public Connection getConexion()
    {
        try{
            Class.forName("com.mysql.jdbc.Driver");
            con=DriverManager.getConnection(this.url, this.user, this.password);
            
        }catch(ClassNotFoundException | SQLException e)
        {
        System.err.println(e);
        }
        return  con ;
        
    }

    
    
    
}
