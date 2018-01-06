import Login.*;
import java.util.*;

public class MainMenu {
	int pilih;
	char ulang;
	RegisterLogin daftar = new RegisterLogin();

    Scanner scan = new Scanner(System.in);
    
    public void menu() {
        do {
            System.out.println();
            System.out.println("Selamat Datang di Dna Coffee");
            System.out.println("==============================================");
            System.out.println("1. Register");
            System.out.println("2. Login");
            System.out.print("\nmasukan pilihan yang ada dimenu : 1/2 ");
            pilih = scan.nextInt();
			scan.nextLine();
            switch (pilih) {
                case 1:
                    do {
                        daftar.register();
                        System.out.print("\ningin kembali ke menu register [y/t] : ");
                        ulang = scan.next().charAt(0);
                        scan.nextLine();
                    }while (ulang == 'y');
                    break;
                case 2:
                    do {
                       	daftar.login();
                        System.out.print("\ningin kembali ke menu utama login [y/t] : ");
                        ulang = scan.next().charAt(0);
                        scan.nextLine();
                    }while (ulang == 'y');
                    break;
                default:
                    System.out.println("maaf pilihan anda tidak ada dimenu");
                    break;
            }
            System.out.print("\ningin kembali ke menu utama [y/t] : ");
            ulang = scan.next().charAt(0);	
            scan.nextLine();
        }while (ulang == 'y');
    }
}
