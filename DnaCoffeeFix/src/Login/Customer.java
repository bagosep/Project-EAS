package Login;

public class Customer{
	public String namaBarangPesanan, jenisBarangPesanan;
	public double hargaBarangPesanan = 0.0, totalSementara = 0.0;
    public int stokBarangPesanan;
    
    public Customer(String namaBarangPesanan, String jenisBarangPesanan, double hargaBarangPesanan, int stokBarangPesanan, double totalSementara) {
    	this.namaBarangPesanan = namaBarangPesanan;
        this.jenisBarangPesanan = jenisBarangPesanan;
        this.hargaBarangPesanan = hargaBarangPesanan;
        this.stokBarangPesanan = stokBarangPesanan;
        this.totalSementara = totalSementara;
    }
    
}