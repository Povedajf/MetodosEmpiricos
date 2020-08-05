package modelo;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.SQLException;

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
         ps.setString(3, cli.getDireccion_cliente());
         ps.setString(4,cli.getTelefono_cliente());
         ps.execute();
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
        return false;
    } 
    
    public boolean  Modificar(Cliente cli) 
    {
        PreparedStatement ps=null;
        Connection con = getConexion();
        String sql ="INSERT INTO `proyecto1factura`.`cliente` (`cedula_cliente`, `nombre_cliente`,telefono_cliente, `direccion_cliente`) VALUES (?,?,?,?)";
        try{
         ps =con.prepareStatement(sql);
         ps.setString(1,cli.getCedula_cliente());
         ps.setString(2, cli.getNombre_cliente());
         ps.setString(3, cli.getDireccion_cliente());
         ps.setString(4,cli.getTelefono_cliente());
         ps.execute();
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
        return false;
    } 
    
}
