package com.company;

import java.util.Scanner;

public class DoWhile {
    public static void main(String[] args){
        int n,i=1;
        Scanner sc= new Scanner(System.in);
        System.out.print("n=");
        n=sc.nextInt();
        do{
            System.out.println(i);
            i++;
        }
        while(i<=n);
    }

}
