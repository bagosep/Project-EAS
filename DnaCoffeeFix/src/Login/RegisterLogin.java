package Login;
import Pemesanan.AdminMenu;
import java.util.*;

public class RegisterLogin extends Controller{
	String nama, username, password, hakAkses;
    String userIn, passIn, hakAksesAdmin = "admin", hakAksesUser = "user",  hakAksesKasir = "kasir";
    int i, j, pilih;
    boolean cek;
    char ulang;
    AdminMenu admin = new AdminMenu();
    Scanner scan = new Scanner(System.in);
    
    public void register() {
        System.out.println("\nSilahkan daftar terlebih dahulu : ");
        scan.nextLine();
        System.out.print("Masukan nama lengkap : ");
        nama = scan.nextLine();
        do {
            try {
                cek = false;

                System.out.print("Masukan username : ");
                username = scan.nextLine();

                for (i = 0; i < dataDiriList.size(); i++) {
                    if (username.equals(dataDiriList.get(i).getUsername())) {
                            throw new Exception();
                    }
                }
            }
            catch (Exception ex) {
                System.out.println("username sudah ada");
                cek = true;
            }
        }while (cek == true);
        System.out.print("Masukan password     : ");
        password = scan.nextLine();
        System.out.print("masukan hak akses    : ");
        hakAkses = scan.nextLine();

        setDataDiri(nama, username, password, hakAkses);
    }

    public void tampilRegister() {
        System.out.println("\ndata user register : ");
        if (dataDiriList.isEmpty()) {
            System.out.println("\ndata kosong");
        }
        else {
            for (i = 0; i < dataDiriList.size(); i++) {
                System.out.println("\ndata ke-" + (i + 1) + " : ");
                System.out.println("nama      : " + dataDiriList.get(i).nama);
                System.out.println("username  : " + dataDiriList.get(i).getUsername());
                System.out.println("password  : " + dataDiriList.get(i).getPassword());
                System.out.println("hak akses : " + dataDiriList.get(i).hakAkses);
            }	
        }
    }
    
    public void login() {
        boolean sukses = false;
        System.out.println("\nSilahkan login : ");
        scan.nextLine();
        System.out.print("Masukan username \t: ");
        userIn = scan.nextLine();
        System.out.print("Masukan password \t: ");
        passIn = scan.nextLine();

        for (i = 0; i < dataDiriList.size(); i++) {
            if ((userIn.equals(dataDiriList.get(i).getUsername())) && (passIn.equals(dataDiriList.get(i).getPassword()))) {
                if (dataDiriList.get(i).hakAkses.equals(hakAksesAdmin)) {
                    System.out.println("\nlogin sukses\n");
                    sukses = true;

                    do { 
                        System.out.println("\n1. Lihat data register");
                        System.out.println("2. Input barang");
                        System.out.println("3. Lihat barang");
                        System.out.println("4. Update barang");
                        System.out.println("5. Hapus barang");
                        System.out.println("6. Pencarian barang");
                   		System.out.println("7. Lihat Pesanan");
                   		System.out.println("8. Hapus Pesanan");
                        System.out.print("\nMasukan pilihan yang ada dimenu 1/8 : ");
                        pilih = scan.nextInt();

                        switch (pilih) {
                            case 1:
                                tampilRegister();
                                break;
                            case 2:
                                admin.inputDataBarang();
                                break;
                            case 3:
                                admin.lihatDataBarang();
                                break;
                            case 4:
                                admin.editDataBarang();
                                break;
                            case 5:
                                admin.hapusDataBarang();
                                break;
                            case 6:
                                admin.pencarianDataBarang();
                                break;
                            case 7:
                            	admin.lihatDataPesanan();
                            	break;
                           	case 8:
                           		admin.lihatDataPesanan();
                           		break;
                            default:
                                System.out.println("maaf pilihan anda tidak ada dimenu");
                                break;	
                        }
                        System.out.print("\ningin kembali ke menu admin [y/t] : ");
                        ulang = scan.next().charAt(0);
                    }while (ulang == 'y');
                }	
                else if (dataDiriList.get(i).hakAkses.equals(hakAksesUser)) {
                    System.out.println("\nlogin sukses\n");
                    sukses = true;
                    
                    do {
                        System.out.println("\n1. input data pesanan");
                        System.out.println("2. lihat data pesanan");
                        System.out.println("3. cetak nota");
                        System.out.print("\nmasukan pilihan yang ada dimenu [input nomer] : ");
                        pilih = scan.nextInt();
                        
                        switch (pilih) {
                            case 1:
                            	admin.inputDataPesanan();
                            	break;
                            case 2:
                            	admin.lihatDataPesanan();
                                break;
                            case 3:
                            	admin.cetaknota();
                            	break;
                            default:
                                System.out.println("maaf pilihan anda tidak ada dimenu");
                                break;
                        }
                        System.out.print("\ningin kembali ke menu user [y/t] : ");
                        ulang = scan.next().charAt(0);
                        scan.nextLine();
                    }while (ulang == 'y');
                }
                else if (dataDiriList.get(i).hakAkses.equals(hakAksesKasir)) {
                    System.out.println("\nlogin sukses\n");
                    sukses = true;
                    
                    do {
                        System.out.println("\n1. lihat data barang");
                        System.out.println("2. lihat data pesanan");
                        System.out.println("3. hapus data pesanan");
                        System.out.print("\nmasukan pilihan yang ada dimenu [input nomer] : ");
                        pilih = scan.nextInt();
                        
                        switch (pilih) {
                            case 1:
                            	admin.lihatDataBarang();
                            	break;
                            case 2:
                            	admin.lihatDataPesanan();
                                break;
                            case 3:
                            	admin.hapusDataPesanan();
                            	break;
                            default:
                                System.out.println("maaf pilihan anda tidak ada dimenu");
                                break;
                        }
                        System.out.print("\ningin kembali ke menu kasir [y/t] : ");
                        ulang = scan.next().charAt(0);
                        scan.nextLine();
                    }while (ulang == 'y');
                }
            }
            
            else if ((i == dataDiriList.size() - 1) && (sukses == false)) {
                System.out.println("\nlogin gagal\n");
            }
        }
    }
}
