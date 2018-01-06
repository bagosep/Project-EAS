package Pemesanan;
import java.util.*;
import Login.*;

public class AdminMenu extends Controller {
	String namaBarang, jenisBarang;
    double hargaBarang;
    String pencarian, pilihNamaBarang;;
    int i, edit, ketemu, stokBarang = 0, stokBarangPesanan = 0, j;;
    String namaBarangPesanan, jenisBarangPesanan;
    double hargaBarangPesanan = 0.0 , totalSementara = 0.0;
    char lagi;
    double bayar, kembalian, total=0.0;
	int sisa;

    Scanner scan = new Scanner(System.in);
	
	public void inputDataBarang() {
        System.out.println("\nsilahkan isi data dengan lengkap : ");
        scan.nextLine();
        System.out.print("masukan nama barang  \t: ");
        namaBarang = scan.nextLine();
		System.out.print("masukan jenis barang \t: ");
        jenisBarang = scan.next();
        System.out.print("masukan harga barang \t: ");
        hargaBarang = scan.nextDouble();
        System.out.print("masukan banyak barang\t: ");
        stokBarang = scan.nextInt();
        setAdmin(namaBarang, jenisBarang, hargaBarang, stokBarang); 
    }
    
    public void lihatDataBarang() {
        System.out.println("1. Makanan");
        System.out.println("2. Minuman");
        System.out.print("masukan pilihan yang ada dimenu [input nama] : ");
        pilihNamaBarang = scan.next();

        if (adminList.isEmpty()) {
            System.out.println("\ndata barang : ");
            System.out.println("\ndata kosong");
        }
        else {
            System.out.println("\ndata barang : ");
            for (i = 0; i < adminList.size(); i++) {
                if (pilihNamaBarang.equals(adminList.get(i).jenisBarang)) {
                    System.out.println("nama barang \t: " + adminList.get(i).namaBarang);
                    System.out.println("jenis barang\t: " + adminList.get(i).jenisBarang);
                    System.out.println("harga barang\t: " + adminList.get(i).hargaBarang);
                    System.out.println("stok barang \t: " + adminList.get(i).stokBarang);
                    System.out.println("\n");
                }
            }
        }
    }
    
    public void editDataBarang() {
        lihatDataBarang();
        
        if (edit < 0 && edit > adminList.size()-1) {
            System.out.println("pastikan inputan sudah benar");
        }
        else {
            System.out.println("\nsilahkan isi data dengan lengkap : ");
            scan.nextLine();
            System.out.print("masukan nama barang\t: ");
            namaBarang = scan.nextLine();
            System.out.print("masuka jenis barang\t: ");
            jenisBarang = scan.nextLine();
            System.out.print("masukan harga barang\t: ");
            hargaBarang = scan.nextDouble();
            System.out.print("\ningin mengubah data ke berapa [input nomer] : ");
            edit = scan.nextInt();

            for (Admin inf:adminList) {
                adminList.set(edit-1, new Admin(namaBarang, jenisBarang, hargaBarang, stokBarang));
            }
        }
    }
    
    public void hapusDataBarang() {
        lihatDataBarang();

        System.out.print("\ningin menghapus data ke berapa [dimulai dari indeks ke 0] : ");
        adminList.remove(scan.nextInt());

        System.out.println("\ndata berhasil dihapus");
    }
    
    public void pencarianDataBarang() {
        ketemu = 0;
        
        System.out.print("masukan nama barang yang ingin dicari : ");
        pencarian = scan.next();
        
        for (i = 0; i < adminList.size(); i++) {
            if (pencarian.equals(adminList.get(i).namaBarang)) {
                System.out.println("nama barang \t: " + adminList.get(i).namaBarang);
                System.out.println("jenis barang\t: " + adminList.get(i).jenisBarang);
                System.out.println("harga barang\t: " + adminList.get(i).hargaBarang);
                ketemu = 1;
            }
        }
        if (i == adminList.size() - 1 && ketemu != 1) {
            System.out.println("data tidak ditemukan");
        }
    }
    
    public void inputDataPesanan() { 
        do { 
        	scan.nextLine();  
            System.out.print("\nmasukan nama pesanan\t: ");
            namaBarangPesanan = scan.nextLine();
            System.out.print("masukan banyak pesanan\t: ");
            stokBarangPesanan = scan.nextInt();
			for(int i=0; i<adminList.size(); i++){
				if(namaBarangPesanan.equals(adminList.get(i).namaBarang)){
					totalSementara=stokBarangPesanan*adminList.get(i).hargaBarang;
					setCustomer(adminList.get(i).namaBarang, adminList.get(i).jenisBarang, adminList.get(i).hargaBarang, stokBarangPesanan, totalSementara);
				}
			}
            System.out.print("ingin memesan lagi [y/t] : ");
            lagi = scan.next().charAt(0);
        }while (lagi == 'y');
    }
    
     public void lihatDataPesanan() {
     	double total=0.0;
        if (customerList.isEmpty()) {
            System.out.println("\ndata kosong");
        }
        else {
            System.out.println("\ndata pesanan : ");
               for (i = 0; i < customerList.size(); i++) {
               		total+=customerList.get(i).totalSementara;
                	System.out.println("nama pesanan  \t: " + customerList.get(i).namaBarangPesanan);
                    System.out.println("jenis pesanan \t: " + customerList.get(i).jenisBarangPesanan);
                    System.out.println("banyak pesanan\t: " + customerList.get(i).stokBarangPesanan);
                    System.out.println("harga pesanan\t: " + customerList.get(i).hargaBarangPesanan);
                    System.out.println("total pesanan\t: " + customerList.get(i).totalSementara);
                    
               }
               System.out.println("Total Semua \t: "+total);
        }
    }
    
    public void hapusDataPesanan(){
    	customerList.clear();
    	System.out.print("\ndata berhasil dihapus");
    }
    
    public void cetaknota(){
		if(customerList.isEmpty()){
			System.out.println("Pesan Terlebih Dahulu!");
		}
		else{
			System.out.print("Masukkan uang yang dibayarkan: ");
			bayar=scan.nextDouble();
			System.out.println("--------------------------- Dna Coffee ----------------------------");
			System.out.println("Nota");
			System.out.println("Nama Barang \t\tJenis Pesanan \t\tBanyak Barang \t\tHarga Barang \t\tTotal");
			for(int i=0; i<customerList.size(); i++){
				total+=customerList.get(i).totalSementara;
				System.out.println("\t"+customerList.get(i).namaBarangPesanan+" \t\t\t\t"+customerList.get(i).jenisBarangPesanan+" \t\t\t\t"+customerList.get(i).stokBarangPesanan+
					" \t\t\t\t"+customerList.get(i).hargaBarangPesanan+" \t\t\t\t"+customerList.get(i).totalSementara);
				for(int j=0; j<adminList.size(); j++){
					if(namaBarangPesanan.equals(adminList.get(j).namaBarang)){
						sisa=adminList.get(j).stokBarang-customerList.get(i).stokBarangPesanan;
						adminList.set(j, new Admin(adminList.get(j).namaBarang, adminList.get(j).jenisBarang, adminList.get(j).hargaBarang, sisa));
					}
				}
			}
			kembalian=bayar-total;
			System.out.println("\nTotal Harga Yang Harus Dibayar: "+total);
			System.out.println("Uang Yang Dibayarkan: "+bayar);
			System.out.println("Kembalian: "+kembalian);
			System.out.println();
			System.out.println();
			System.out.println("--------------------------- Dna Coffee ----------------------------");
		}
	}
}
