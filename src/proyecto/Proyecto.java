
package proyecto;

import controlador.CtrlCliente;
import controlador.ctrlInventario;
import java.sql.SQLException;
import modelo.Cliente;
import modelo.ConsultasCliente;
import modelo.ConsultasInventario;
import modelo.Inventario;
import vista.frmCliente;
import vista.frmInventario;
import vista.frmMenu;

public class Proyecto {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws SQLException {
      
        frmMenu InicioMenu = new frmMenu();
        InicioMenu.setVisible(true);
   
    }
    
}
