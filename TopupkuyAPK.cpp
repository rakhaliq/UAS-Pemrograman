//aplikasi ini hanya untuk sebagai perantara pengguna untuk menemukan seller legal dan terpercaya yang menjual top up game 

#include <iostream>

using namespace std;

void backtomainmenu();  //fungsi untuk kembali ke menu utama

class dataSeller{		//class untuk menyimpan data dari seller cash top up game
	private:
		string kontakline, kontakWA;
	public:		//enkapsulasi
		string getKontakline() { return kontakline; }
		void setKontakline(string cKontakline) {kontakline = cKontakline;}
		string getKontakWA() { return kontakWA; }
		void setKontakWA(string cKontakWA) {kontakWA = cKontakWA;}
};

class daftarGame{  //class untuk menyimpan data menu daftar game
	public:
	int pilih;
	string Menu1 () {  //fungsi menu game yang tersedia
	string mn ="|		1. Vainglory 			 |\n|		2. Arena of Valor 		 |\n|		3. Mobile legends 		 |\n|		4. PUBG Mobile 			 |\n|		5. Exit 			 |\n";
	return mn;
	}		

void MenuVainglory (){  //fungsi yang berisi data dan harga ice serta data kontak dari seller game vainglory
	system ("cls"); //untuk membersihkan tampilan sebelumnya
	dataSeller datakontak;  //objek dari class dataSeller
	datakontak.setKontakline("vgICE");
	datakontak.setKontakWA("083249544323");
	cout<<" ================================================"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<"|\t\tVainglory ICE\t\t\t |"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<"|  1. 600 ice		= Rp. 70.000,00 	 |\n|  2. 1300 ice		= Rp. 139.000,00 	 |\n|  3. 2640 ice		= Rp. 279.000,00 	 |\n|  4. 6900 ice		= Rp. 690.000,00 	 |\n|  5. 14400 ice		= Rp. 1.393.061,00 	 |\n|  6. 28800 ice		= Rp. 1.393.061,00 	 |\n";
	cout<<"|						 |\n|						 |\n|  Untuk transaksi/pembelian lebih lanjut 	 |\n|  Silahkan hubungi kontak di bawah ini 	 |"<<endl;
	cout<<"|  Line		: "<<datakontak.getKontakline()<<"				 |"<<endl; //menampilkan fungsi dari getKontakline yang ada pada class dataSeller
	cout<<"|  WhatsApp	: "<<datakontak.getKontakWA()<<"			 | "<<endl;  //menampilkan fungsi dari getKontakWA yang ada pada class dataSeller
	cout<<" ================================================\n\n"<<endl;
	}
	
void MenuAoV (){  //fungsi yang berisi data dan harga voucher serta data kontak dari seller game arena of valor
	system("cls");  //untuk membersihkan tampilan sebelumnya
	dataSeller datakontak; //objek dari class dataSeller
	datakontak.setKontakline("aovindo");
	datakontak.setKontakWA("081243567890");
	cout<<" ================================================"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<"|\t   Arena of Valor Voucher\t\t |"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<"|  1. 241 voucher	= Rp. 59.000,00 	 |\n|  2. 405 voucher	= Rp. 99.000,00 	 |\n|  3. 655 voucher	= Rp. 159.000,00 	 |\n|  4. 1235 voucher	= Rp. 299.000,00 	 |\n|  5. 3715 voucher	= Rp. 899.000,00 	 |\n|  6. 6205 voucher	= Rp. 1.499.000,00 	 |\n";
	cout<<"|						 |\n|						 |\n|  Untuk transaksi/pembelian lebih lanjut 	 |\n|  Silahkan hubungi kontak di bawah ini		 |"<<endl;
	cout<<"|  Line		: "<<datakontak.getKontakline()<<"			 |"<<endl; //menampilkan fungsi dari getKontakline yang ada pada class dataSeller
	cout<<"|  WhatsApp	: "<<datakontak.getKontakWA()<<"			 | "<<endl; //menampilkan fungsi dari getKontakWA yang ada pada class dataSeller
	cout<<" ================================================\n\n"<<endl;
	}

void MenuMobileLegends (){  //fungsi yang berisi data dan harga diamond serta data kontak dari seller game mobile legends
	system("cls");  //untuk membersihkan tampilan sebelumnya
	dataSeller datakontak;  //objek dari class dataSeller
	datakontak.setKontakline("mobilestore");
	datakontak.setKontakWA("08124146345");
	cout<<" ================================================"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<"|\t\tMobile legends Diamond\t\t |"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<"|  1. 250 diamond	= Rp. 75.000,00 	 |\n|  2. 500 diamond	= Rp. 149.000,00 	 |\n|  3. 1000 diamond	= Rp. 299.000,00 	 |\n|  4. 1500 diamond	= Rp. 439.000,00 	 |\n|  5. 2500 diamond	= Rp. 739.000,00 	 |\n|  6. 5000 diamond	= Rp. 1.499.000,00 	 |\n";
	cout<<"|						 |\n|						 |\n|  Untuk transaksi/pembelian lebih lanjut 	 |\n|  Silahkan hubungi kontak di bawah ini		 |"<<endl;
	cout<<"|  Line		: "<<datakontak.getKontakline()<<"			 |"<<endl; //menampilkan fungsi dari getKontakline yang ada pada class dataSeller
	cout<<"|  WhatsApp	: "<<datakontak.getKontakWA()<<"			 | "<<endl; //menampilkan fungsi dari getKontakWA yang ada pada class dataSeller
	cout<<" ================================================\n\n"<<endl;
}
 
void MenuPUBGM (){  //fungsi yang berisi data dan harga cash serta data kontak dari seller game PUBG Mobile
	system("cls");  //untuk membersihkan tampilan sebelumnya
	dataSeller datakontak;  //objek dari class data seller
	datakontak.setKontakline("shootpubg");
	datakontak.setKontakWA("082386795634");
	cout<<" ================================================"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<"|\t\tPUBG Mobile Cash\t\t |"<<endl;
	cout<<"|\t\t\t\t\t\t |"<<endl;
	cout<<"================================================"<<endl;
	cout<<"|  1. 60 cash	= Rp. 15.000,00 		 |\n|  2. 180 cash	= Rp. 43.085,00 		 |\n|  3. 600 cash	= Rp. 144.000,00 		 |\n|  4. 1500 cash	= Rp. 360.069,00 		 |\n|  5. 3000 cash	= Rp. 721.000,00 		 |\n|  6. 6000 cash = Rp. 1.440.000,00 		 |\n";
	cout<<"|						 |\n|						 |\n|  Untuk transaksi/pembelian lebih lanjut 	 |\n|  Silahkan hubungi kontak di bawah ini		 |"<<endl;
	cout<<"|  Line		: "<<datakontak.getKontakline()<<"			 |"<<endl;  //menampilkan fungsi dari getKontakline yang ada pada class dataSeller
	cout<<"|  WhatsApp	: "<<datakontak.getKontakWA()<<"			 | "<<endl;  //menampilkan fungsi dari getKontakWA yang ada pada class dataSeller
	cout<<" ================================================\n\n"<<endl;
}

};



void mainmenu(){  //fungsi untuk menampilkan menu utama
	daftarGame game; //objek dari class daftarGame
	system ("cls");  //untuk membersihkan tampilan sebelumnya
	cout<<" ================================================"<<endl;
	cout<<"| 	Selamat datang di aplikasi TOPUPkuy 	 |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<" ================================================"<<endl;
	cout<<"|\t     Menu Game yang tersedia\t\t |"<<endl;
	cout<<" ================================================"<<endl;
	cout<<game.Menu1();  //menampilkan fungsi Menu1 yang ada di dalam class daftarGame
	cout<<" ================================================\n";
	cout<<"   Silahkan masukkan pilihan: ";
	cin>>game.pilih;  //memasukkan pilihan game mana yang ingin di akses
	cout<<" ================================================\n\n";
	if (game.pilih == 1){
		game.MenuVainglory(); //memanggil fungsi yang menampilkan fungsi menuVainglory yang ada pada class daftarGame
		backtomainmenu();  //menampilkan fungsi yang menampilkan pilihan untuk kembali kemenu utama atau tidak
	}
	else if (game.pilih == 2){
		game.MenuAoV(); //memanggil fungsi yang menampilkan fungsi menuAoV yang ada pada class daftarGame
		backtomainmenu(); //memanggil fungsi yang menampilkan pilihan untuk kembali ke menu utama atau tidak
	}
	else if (game.pilih == 3){
		game.MenuMobileLegends();  //memanggil fungsi yang menampilkan fungsi menuMobileLegends yang ada pada class daftarGame
		backtomainmenu();  //memanggil fungsi yang menampilkan pilihan untuk kembali ke menu utama atau tidak
	}
	else if (game.pilih == 4){
		game.MenuPUBGM();  //memanggil fungsi yang menampilkan fungsi menuPUBGM yang ada pada class daftarGame
		backtomainmenu();  //memanggil fungsi yang menampilkan pilihan untuk kembali ke menu utama atau tidak
	}
	

}

void backtomainmenu(){ //fungsi yang digunakan untuk kembali ke menu utama ketika kita berada di menu data dan harga
	char pilihan;
	cout<<"	Kembali ke menu utama? (y/n)";
	cout<<"\n\n\n ================================================"<<endl;
	cin>>pilihan;
	
	if (pilihan == 'y'){
		mainmenu(); //fungsi yang digunakan untuk kembali ke menu utama
	}
	else{
		exit(0); //keluar dari program
	}
}


int main(){  //fungsi main

	mainmenu(); //fungsi mainmenu untuk menampilkan menu utama dan menjalankan program

	return 0;
}
