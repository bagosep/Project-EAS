package Login;
import java.util.*;
import Pemesanan.*;

public class Controller {
	public ArrayList<Data>dataDiriList;
    public ArrayList<Admin>adminList;
    public ArrayList<Customer>customerList;
    
    public Controller() {
        dataDiriList = new ArrayList<Data>();
        adminList = new ArrayList<Admin>();
        customerList = new ArrayList<Customer>();
    }
    
    public void setDataDiri(String nama, String username, String password, String hakAkses) {
        dataDiriList.add(new Data(nama, username, password, hakAkses));
    }
    
    public void setAdmin(String namaBarang, String jenisBarang, double hargaBarang, int stokBarang) {
        adminList.add(new Admin(namaBarang, jenisBarang, hargaBarang, stokBarang));
    }
    
    public void setCustomer(String namaBarangPesanan, String jenisBarangPesanan, double hargaBarangPesanan, int stokBarangPesanan, double totalSementara) {
        customerList.add(new Customer(namaBarangPesanan, jenisBarangPesanan, hargaBarangPesanan, stokBarangPesanan, totalSementara));
    }
    

}
