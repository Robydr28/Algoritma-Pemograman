 #include <stdio.h>
 #include <stdbool.h>

 int main (){
			
	char Nama[ 20 ];
			
	char Npm [ 20 ];
			
	float Ipk;
			
	int Nilai;
			
	char Kelamin[ 20 ];
			
	bool Status= true ;
			
	
		printf ("Selamat Datang Di Program saya \n");
		
		printf ("= = = = = = = = = = = = = = = = \n");
	
		printf ("\n");
	
		printf("Masukan Nama	  :");
		scanf ("%s" , 	&Nama);
	
	
		printf("Masukan Npm		  :");
		scanf ("%s" , 	&Npm);
	
	 
		printf("Masukan Ipk		  :");
		scanf ("%s" ,	&Ipk);
	
	
		printf("Masukan Nilai	  :");
		scanf ("%s",	&Nilai);
	
			
		printf("P/L			 	  :");
		scanf ("%s",	&Kelamin);
	
	
		printf("Status Pernikahan :");
		scanf ("%s",	&Status);
	
	
		printf("\n");
		
		printf("= = = = = = = = = = = = = = = =  \n");
		printf("Data Diri Anda Adalah 	\n"	);
		
		printf("= = = = = = = = = = = = = = = =	 \n"
);
		printf("\n");
	
	
	
	
		printf("Nama anda adalah 	%s\n",   Nama);
		
		printf("Npm  anda adalah 	%s\n", 	 Npm);
	
		printf("Ipk  anda adalah 	%s\n",	 Ipk);
	
		printf("Nilai anda adalah	%s\n",	 Nilai);
	
		printf("Jenis Kelamin Anda adalah	%s\n",	Kelamin);
	
		printf("Status Anda Adalah %s\n",	Status);
	
	return 0;
	}
			
			
			
			
			
			
