/* 
 * Student Name: Pelin Hakverir
 * Student ID : 150140031
 * Date:  13.10.2015
 */   
 
 //the struct for keeping records
struct book_record {             
	char authorName[20], authorSurname[20], title[20];
	int ISBN, location;
	char bookType[10];  
};

//isbn numaras� asl�nda 13 haneli fakat burada integer almam�z� istedi�iniz i�in ba�taki �lke kodunu vs atarak 5 haneli olarak programda �al��t�r�yorum
//I assumed that the user will enter the strings without blanks because of the limited size
//for example, name of a book will be written as "KurkMantoluMadonna"

