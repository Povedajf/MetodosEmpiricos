package modelo;

import static java.lang.System.console;
import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.swing.table.DefaultTableModel;

public class ConsultasCliente extends Conexion{
     
    public boolean  registrar(Cliente cli) 
    {
        PreparedStatement ps=null;
        Connection con = getConexion();
        String sql ="INSERT INTO `proyecto1factura`.`cliente` (`cedula_cliente`, `nombre_cliente`,telefono_cliente, `direccion_cliente`) VALUES (?,?,?,?)";
        try{
         ps =con.prepareStatement(sql);
         ps.setString(1,cli.getCedula_cliente());
         ps.setString(2, cli.getNombre_cliente());
         ps.setString(3,cli.getTelefono_cliente());
         ps.setString(4, cli.getDireccion_cliente());
         
         ps.execute();
         return true;
        }catch (SQLException e){
               System.err.println(e);
               return false;
        }finally{
            try{
                con.close();
            }catch(SQLException e){
                System.err.println(e);
            }
        }
    } 
    
    public boolean  Modificar(Cliente cli) 
    {
        PreparedStatement ps=null;
        Connection con = getConexion();
        String sql= "UPDATE `proyecto1factura`.`cliente` SET "
                + "`nombre_cliente` = ?,`telefono_cliente` =? ,`direccion_cliente` =? "
                + " WHERE `cedula_cliente` = ?";
        try{
         ps =con.prepareStatement(sql);
         ps.setString(1, cli.getNombre_cliente());
         ps.setString(2,cli.getTelefono_cliente());
         ps.setString(3, cli.getDireccion_cliente());
        ps.setString(4,cli.getCedula_cliente());

         ps.execute();
         return true;
        }catch (SQLException e){
               System.err.println(e);
               return false;
        }finally{
            try{
                con.close();
            }catch(SQLException e){
                System.err.println(e);
            }
        }
    } 
  
    
    //10:12
    public boolean  Eliminar(Cliente cli) 
    {
        PreparedStatement ps=null;
        Connection con = getConexion();
        String sql= "DELETE FROM `proyecto1factura`.`cliente`\n" +
"WHERE cedula_cliente=?;";
        try{
         ps =con.prepareStatement(sql);
         ps.setString(1,cli.getCedula_cliente());
         ps.execute();
         return true;
        }catch (SQLException e){
               System.err.println(e);
               return false;
        }finally{
            try{
                con.close();
            }catch(SQLException e){
                System.err.println(e);
            }
        }
    } 
    
    public boolean  Buscar(Cliente cli) 
    {
        PreparedStatement ps=null;
        ResultSet rs=null;
        Connection con = getConexion();
        String sql= "SELECT * FROM  `proyecto1factura`.`cliente` WHERE `cedula_cliente`=?;";
        try{
         ps =con.prepareStatement(sql);
         ps.setString(1,cli.getCedula_cliente());
         rs=ps.executeQuery();
         if(rs.next())
         {
          cli.setCedula_cliente(rs.getString("cedula_cliente"));
          cli.setNombre_cliente(rs.getString("nombre_cliente"));
          cli.setTelefono_cliente(rs.getString("telefono_cliente"));
          cli.setDireccion_cliente(rs.getString("direccion_cliente"));
                  return true;
         }
         return false;
        }catch (SQLException e){
               System.err.println(e);
               return false;
        }finally{
            try{
                con.close();
            }catch(SQLException e){
                System.err.println(e);
            }
        }
    } 
    private final String SQL_SELECT= "Select * from proyecto1factura.cliente";
    private DefaultTableModel DT;
    private ResultSet  RS;
    private DefaultTableModel setCedulas(){
             DT= new DefaultTableModel();
             DT.addColumn("Cedula");
             DT.addColumn("Nombre");
             
        return DT;
    }
    public DefaultTableModel getCedulas() {
        PreparedStatement ps=null;
        ResultSet rs=null;
        Connection con = getConexion();
            try{
                setCedulas();
                ps =con.prepareStatement(SQL_SELECT);
                rs=ps.executeQuery();
                Object[] fila= new Object[2];
                while(rs.next()){
                fila[0]=rs.getString(1);
                fila[1]=rs.getString(2);
                DT.addRow(fila);
                }
            }catch(SQLException e){
                System.err.println(e);
            }finally{
                ps=null;
                rs=null;
                
            }
        return DT;
    }
    
   
}
