
package controlador;

import java.awt.event.ActionEvent;

import javax.swing.JOptionPane;
import modelo.Cliente;
import modelo.ConsultasCliente;
import vista.frmCliente;
import java.awt.event.ActionListener;
import java.sql.ResultSet;
import java.sql.SQLException;
import javax.swing.table.DefaultTableModel;

public class CtrlCliente implements ActionListener {
    private Cliente mod;
    private ConsultasCliente modC;
    private  frmCliente frml;
    public CtrlCliente(Cliente mod,ConsultasCliente modC,frmCliente frml)
    {
        this.mod=mod;
        this.modC=modC;
        this.frml=frml;
        this.frml.btnGuardar.addActionListener( this);
        this.frml.btnModificar.addActionListener(this);
        this.frml.btnBuscar.addActionListener(this);
        this.frml.btnEliminar.addActionListener(this);
        this.frml.btnLimpiar.addActionListener( this);

    }
    
  
    public void iniciar(){
        frml.setTitle("Clientes");
        frml.setLocationRelativeTo(null);
        frml.txtbuscar.setVisible(false);

    }
@Override
    public void actionPerformed(ActionEvent e){
        if(e.getSource()==frml.btnGuardar)
        {
            mod.setCedula_cliente(frml.txtcedula.getText());
            mod.setNombre_cliente(frml.txtnombres.getText());
            mod.setDireccion_cliente(frml.txtdireccion.getText());
            mod.setTelefono_cliente(frml.txttelefono.getText());
             if(modC.registrar(mod))
                {
                    JOptionPane.showMessageDialog(null,"Registro Guardado ");
                    limpiar();
                    listar();
                }else{
                JOptionPane.showMessageDialog(null,"No se pudo registrar ");
             }
             
             
        }
        //modificar
        if(e.getSource()==frml.btnModificar)
        {
        mod.setCedula_cliente(frml.txtcedula.getText());
        mod.setNombre_cliente(frml.txtnombres.getText());
        mod.setDireccion_cliente(frml.txtdireccion.getText());
        mod.setTelefono_cliente(frml.txttelefono.getText());
         if(modC.Modificar(mod))
         {
             
             JOptionPane.showMessageDialog(null," Registro actualizado");
             limpiar();
             
         }else{
         JOptionPane.showMessageDialog(null,"Error al Actualizar");

         }
         
        }
        if(e.getSource()==frml.btnEliminar)
        {
        mod.setCedula_cliente(frml.txtcedula.getText());
        
         if(modC.Eliminar(mod))
         {
             JOptionPane.showMessageDialog(null,"Registro Borrado ");
            limpiar();
            listar();
         }else{
         JOptionPane.showMessageDialog(null,"Error al borrar registro");

         }
         
        }
        
        if(e.getSource()==frml.btnBuscar)
        {
        mod.setCedula_cliente(frml.txtbuscarced.getText());
        if(modC.Buscar(mod))
         {
             frml.txtcedula.setText(mod.getCedula_cliente());
             frml.txtnombres.setText(mod.getNombre_cliente());
             frml.txtdireccion.setText(mod.getDireccion_cliente());
             frml.txttelefono.setText(mod.getTelefono_cliente());
            
         }else{
         JOptionPane.showMessageDialog(null,"No encontrado");
         }
         
        }
     if(e.getSource()==frml.btnLimpiar)
        {
            limpiar();
        }
     
    }
    
    public void limpiar(){
    frml.txtcedula.setText(null);
    frml.txtdireccion.setText(null);
    frml.txtnombres.setText(null);
    frml.txttelefono.setText(null);
    }
    
    public void listar() {
        frml.tabla.setModel(modC.getCedulas());
    
    }
}
