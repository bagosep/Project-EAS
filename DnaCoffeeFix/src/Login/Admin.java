package Login;

public class Admin {
	public String namaBarang, jenisBarang;
    public double hargaBarang;
    public int stokBarang;
    
    public Admin(String namaBarang, String jenisBarang) {
        this.namaBarang = namaBarang;
        this.jenisBarang = jenisBarang;
    }
    
    public Admin(String namaBarang, String jenisBarang, double hargaBarang, int stokBarang) {
    	this.namaBarang = namaBarang;
        this.jenisBarang = jenisBarang;
        this.hargaBarang = hargaBarang;
        this.stokBarang = stokBarang;
    }
}