import java.util.Scanner; 

public class password {
public static void main (String[] arg){
Scanner scanner = new Scanner(System.in);

while(true){
int number = scanner.nextInt();
if (number == 1999){
System.out.println("Correct");
break;}
else {
System.out.println("Wrong");}
}}}
