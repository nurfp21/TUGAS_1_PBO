import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        //Penginputan Nilai
        System.out.println("Berapa Data Yang Ingin Diinput : ");
        int berapa = input.nextInt();

        int nilai[]=new int [10];
        for(int i=1; i<=berapa; i++) {
            System.out.println("Masukkan Nilai Ke " +i+" : ");
            nilai[i] = input.nextInt();
        }
        //Pengoutputan While
        System.out.println("PENGOUTPUTAN MENGGUNAKAN WHILE");
        int j=1;
        while (j<=berapa)
        {
            System.out.println("Nilai "+j+" : "+nilai[j]);
            j++;
        }
        //Pengoutputan do while
        System.out.println("PENGOUTPUTAN MENGGUNAKAN DO WHILE");
        int k=1;
        do
        {
            System.out.println("Nilai "+k+" : "+nilai[k]);
            k++;
        }
        while(k<=berapa);
        //Array 1 Dimensi
        System.out.println("PENGOUTPUTAN MENGGUNAKAN ARRAY 1 DIMENSI");
        System.out.println("Nilai Yang Sudah Diinputkan : ");
        for(int l=1; l<=berapa; l++)
        {
            System.out.println(nilai[l]+",");
        }
        //Array 2 Dimensi
        System.out.println("INPUT ULANG NILAI DIATAS UNTUK DIMASUKKAN MENJADI ARRAY 2 DIMENSI");
        System.out.println("Berapa Baris : ");
        int a=input.nextInt();
        System.out.println("Berapa Kolom : ");
        int b=input.nextInt();

        int nl[][]=new int [10][10];
        for(int e=0; e<a; e++)
        {
            for(int f=0; f<b; f++)
            {
                System.out.print("Masukkan elemen baris["+e+"]kolom["+f+"] : "+nl[e][f]);
                nl[e][f]=input.nextInt();
            }
        }System.out.println();
        System.out.println("Nilai Sudah Berubah Menjadi Bentuk Array 2 Dimensi");
        if(a>=2&&b>=2)
        {
            for(int g=0; g<a; g++)
            {
                for(int h=0; h<b; h++)
                {
                    System.out.print(nl[g][h]+" ");
                }
                System.out.println();
            }
        }
    }
}