
package proyecto;

import controlador.CtrlCliente;
import java.sql.SQLException;
import modelo.Cliente;
import modelo.ConsultasCliente;
import vista.frmCliente;

public class Proyecto {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) throws SQLException {
      
        
        Cliente  mod = new Cliente();
        ConsultasCliente modC =new ConsultasCliente();
        frmCliente frml = new frmCliente();
        CtrlCliente ctrl = new  CtrlCliente(mod,modC,frml);
        ctrl.iniciar();
        frml.setVisible(true);
       ctrl.listar();
    }
    
}
