/**
 * 
 */
package HW8_101044044;

import java.io.ObjectInputStream.GetField;

/**
 * @author Talayhan
 * Just, you should handle dynamic array part.
 */
public class Driver {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		//Test1 Family
		Person Selivestr = new Person("Selivstr", "Tolstoy",1612,"Male");
		Person Sophia = new Person("Sophia", "Tolstoy",1844,"Female");
		Family Tolstoy = new Family(Selivestr, Sophia);
		//Print Family information
		System.out.println(Tolstoy.toString());
		
		// Create child
		Person Ivan = new Person("Ivan","Tolstoy",1644,"Male");
		//Add child to family
		Tolstoy.add(Ivan);
		System.out.println(Tolstoy.toString());
		
		
		//Test2 Family
		Person Feofil = new Person("Feofil", "Klitscko",1612,"Male");
		Person Tatiana = new Person("Tatiana", "Klitscko",1844,"Female");
		Family Klitscko = new Family(Feofil, Tatiana);
		//Print Family information
		System.out.println(Klitscko.toString());
		
		// Create child
		Person Lev = new Person("Lev","Klitscko",1689,"Male");
		Person Aleksei = new Person("Aleksei","Klitscko",1689,"Male");
		//Add child to family
		Klitscko.add(Ivan);
		Klitscko.add(Lev);
		Klitscko.add(Aleksei);
		
		//Print Family information
		System.out.println(Klitscko.toString());
		
		//Compare Two Families
		System.out.println("\n\nCall compareTo() method.");
		if(Klitscko.compareTo(Tolstoy)){
			System.out.println("Two Families are equal.");
		}else{
			System.out.println("Two Families are different.");
		}
		
		System.out.println("Total number of families created so far: " 
		+ Family.getNumberOfFamilies());
	
	}

}
