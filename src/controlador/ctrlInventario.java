package controlador;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JOptionPane;
import modelo.ConsultasInventario;
import modelo.Inventario;
import vista.frmInventario;

public class ctrlInventario implements ActionListener{
    
    private Inventario modd;
    private ConsultasInventario modCC;
    private frmInventario frmm;
    
    public ctrlInventario(Inventario modd, ConsultasInventario modCC, frmInventario frmm)
    {
        this.modd=modd;
        this.modCC=modCC;
        this.frmm=frmm;
        this.frmm.btnGuardar.addActionListener(this);
        this.frmm.btnModificar.addActionListener(this);
        this.frmm.btnEliminar.addActionListener(this);
        this.frmm.btnLimpiar.addActionListener(this);
        this.frmm.btnBuscar.addActionListener(this);
    }
    
    public void iniciar()
    {
        frmm.setTitle("Inventario");
        frmm.setLocationRelativeTo(null);
        frmm.txtId.setVisible(true);
    }
    
    @Override
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource() == frmm.btnGuardar)
        {
            modd.setNombre(frmm.txtNombre.getText());
            modd.setCantidad(Integer.parseInt(frmm.txtCantidad.getText()));
            modd.setDescripcion(frmm.txtDescripcion.getText());
            modd.setCosto(Double.parseDouble(frmm.txtCosto.getText()));
            modd.setPrecio(Double.parseDouble(frmm.txtPrecio.getText()));
            
            if(modCC.registrar(modd))
            {
                JOptionPane.showMessageDialog(null, "Registro Guardado");
                limpiar();
            }else{
                JOptionPane.showMessageDialog(null, "Error al Guardar");
                limpiar();
            }
            
        }
        
        if(e.getSource() == frmm.btnModificar)
        {
            modd.setId(Integer.parseInt(frmm.txtId.getText()));
            modd.setNombre(frmm.txtNombre.getText());
            modd.setCantidad(Integer.parseInt(frmm.txtCantidad.getText()));
            modd.setDescripcion(frmm.txtDescripcion.getText());
            modd.setCosto(Double.parseDouble(frmm.txtCosto.getText()));
            modd.setPrecio(Double.parseDouble(frmm.txtPrecio.getText()));
            
            if(modCC.modificar(modd))
            {
                JOptionPane.showMessageDialog(null, "Registro Modificado");
                limpiar();
            }else{
                JOptionPane.showMessageDialog(null, "Error al Modificar");
                limpiar();
            }
            
        }
        
        if(e.getSource() == frmm.btnEliminar)
        {
            modd.setId(Integer.parseInt(frmm.txtId.getText()));
            
            if(modCC.eliminar(modd))
            {
                JOptionPane.showMessageDialog(null, "Registro Eliminado");
                limpiar();
            }else{
                JOptionPane.showMessageDialog(null, "Error al Eliminar");
                limpiar();
            }
            
        }
        
        if(e.getSource() == frmm.btnBuscar)
        {
            modd.setId(Integer.parseInt(frmm.txtId.getText()));
            
            if(modCC.buscar(modd))
            {
                
                frmm.txtId.setText(String.valueOf(modd.getId()));
                frmm.txtNombre.setText(modd.getNombre());
                frmm.txtCantidad.setText(String.valueOf(modd.getCantidad()));
                frmm.txtDescripcion.setText(modd.getDescripcion());
                frmm.txtPrecio.setText(String.valueOf(modd.getPrecio()));
                frmm.txtCosto.setText(String.valueOf(modd.getCosto()));
                
            }else{
                JOptionPane.showMessageDialog(null, "No se encontro el registro");
                limpiar();
            }
            
        }
        
        if(e.getSource() == frmm.btnLimpiar){
             limpiar();
        }
        
    }
    
    public void limpiar()
    {
        frmm.txtId.setText(null);
        frmm.txtNombre.setText(null);
        frmm.txtCantidad.setText(null);
        frmm.txtDescripcion.setText(null);
        frmm.txtCosto.setText(null);
        frmm.txtPrecio.setText(null);
    }
    
}
