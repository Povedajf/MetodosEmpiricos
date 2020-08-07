package modelo;

import java.sql.Connection;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.swing.table.DefaultTableModel;

public class ConsultasInventario extends Conexion {

    public boolean registrar(Inventario inv) {
        PreparedStatement ps = null;
        Connection con = getConexion();
        String sql = "INSERT INTO inventario(cantidad_inventario, nombre_inventario, descripcion_inventario, costo_inventario, precio_inventario) VALUES(?,?,?,?,?)";
        
        try {

            ps = con.prepareStatement(sql);
            ps.setInt(1, inv.getCantidad());
            ps.setString(2, inv.getNombre());
            ps.setString(3, inv.getDescripcion());
            ps.setDouble(4, inv.getCosto());
            ps.setDouble(5, inv.getPrecio());
            ps.execute();
            return true;

        } catch (SQLException e) {
            System.err.println(e);
            return false;
        } finally {
            try {
                con.close();
            } catch (SQLException e) {
                System.err.println(e);
            }
        }
    }
    
    public boolean modificar(Inventario inv) {
        PreparedStatement ps = null;
        Connection con = getConexion();
        String sql = "UPDATE inventario SET cantidad_inventario=?, nombre_inventario=?, descripcion_inventario=?, costo_inventario=?, precio_inventario=? WHERE id_inventario=?";

        try {

            ps = con.prepareStatement(sql);
            ps.setInt(1, inv.getCantidad());
            ps.setString(2, inv.getNombre());
            ps.setString(3, inv.getDescripcion());
            ps.setDouble(4, inv.getCosto());
            ps.setDouble(5, inv.getPrecio());
            ps.setInt(6, inv.getId());
            ps.execute();
            return true;

        } catch (SQLException e) {
            System.err.println(e);
            return false;
        } finally {
            try {
                con.close();
            } catch (SQLException e) {
                System.err.println(e);
            }
        }
    }
    
    public boolean eliminar(Inventario inv) {
        PreparedStatement ps = null;
        Connection con = getConexion();
        String sql = "DELETE FROM inventario WHERE id_inventario=?";

        try {

            ps = con.prepareStatement(sql);
            ps.setInt(1, inv.getId());
            ps.execute();
            return true;

        } catch (SQLException e) {
            System.err.println(e);
            return false;
        } finally {
            try {
                con.close();
            } catch (SQLException e) {
                System.err.println(e);
            }
        }
    }
    
    public boolean buscar(Inventario inv) {
        PreparedStatement ps = null;
        ResultSet rs=null;
        Connection con = getConexion();
        String sql = "Select * FROM inventario WHERE id_inventario=? ";

        try {

            ps = con.prepareStatement(sql);
            ps.setInt(1, inv.getId());
            rs = ps.executeQuery();
            
            if (rs.next())
            {
                inv.setId(Integer.parseInt(rs.getString("id_inventario")));
                inv.setCantidad(Integer.parseInt(rs.getString("cantidad_inventario")));
                inv.setNombre(rs.getString("nombre_inventario"));
                inv.setDescripcion(rs.getString("descripcion_inventario"));
                inv.setCosto(Double.parseDouble(rs.getString("costo_inventario")));
                inv.setPrecio(Double.parseDouble(rs.getString("precio_inventario")));
                return true;
            }
            
            return false;

        } catch (SQLException e) {
            System.err.println(e);
            return false;
        } finally {
            try {
                con.close();
            } catch (SQLException e) {
                System.err.println(e);
            }
        }
    }
    
    private final String SQL_SELECT = "SELECT * FROM inventario";
    private DefaultTableModel DTT;
    private ResultSet RS;
    
    private DefaultTableModel setNombres()
    {
        DTT = new DefaultTableModel();
        DTT.addColumn("ID");
        DTT.addColumn("Nombre");
        return DTT;
    }
    
    public DefaultTableModel getRegistros()
    {
        PreparedStatement ps = null;
        Connection con = getConexion();
        ResultSet rs=null;
        
        try{
            setNombres();
            ps = con.prepareStatement(SQL_SELECT);
            rs = ps.executeQuery();
            Object[] fila = new Object[2];
            while(rs.next()){
                fila[0] = rs.getInt(1);
                fila[1] = rs.getString(3);
                DTT.addRow(fila);
            }
        }catch(SQLException e){
            System.err.println(e);
        }finally{
            ps=null;
            rs=null;
        } 
        return DTT;
    }
    
}
