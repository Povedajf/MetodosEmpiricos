
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
        
        Inventario modd = new Inventario();
        ConsultasInventario modCC = new ConsultasInventario();
        frmInventario frmm = new frmInventario();
        
        ctrlInventario Control = new ctrlInventario(modd, modCC, frmm);
        Control.iniciar();
        frmm.setVisible(true);
   
    }
    
}
