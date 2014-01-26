/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */
package HW09_101044044;

/**
 * CSE241_HW09 Samet Sait Talayhan 101044044
 */


/**
 * @author talayhan
 *
 */
public class Family {
	// Data fields
	private Person father = null;
	private Person mother = null;
	private Person [] children;
	
	/** The current size of the children array */
	private int size = 0;
	
	/** The current size of the array */
	private final static int INITIAL_CAPACITY = 10;
	
	/** T */
	private int capacity = INITIAL_CAPACITY;
	public static int numberOfFamilies = 0;
	
	/**
	 * No parameter constructor. */
	public Family(){
		++numberOfFamilies; //increase family number
		children = new Person [INITIAL_CAPACITY];
	}
	
	/**
	 * Two paramater constructor. */
	public Family(Person father, Person mother){
		if(father.getGender().equals(mother.getGender())){
			throw new IllegalArgumentException("Father and Mother should have different" +
					" gender!");
		}
		this.father = father;
		this.mother = mother;
		children = new Person [INITIAL_CAPACITY];
		++numberOfFamilies;
	}
	
	/**
	 * Allocate a new array to hold */
	private void reallocate(){
		capacity = capacity * 2;
		Person[] newArray = new Person[capacity];
		System.arraycopy(children, 0, newArray, 0, children.length);
		
		children = newArray;
	}
	
	/**
	 * Method at() returns the child at the given index.
	 * @param int index
	 * @return Person at the given index.  */
	public Person at(int index){
		// Validty check
		if(index < 0 || index >= size){
			throw new IndexOutOfBoundsException("Invalid index!");
		}
		return children[index];
	}
	
	/**
	 * Method add() that adds the Person as a child
	 * to the family. 
	 * @param Person as a child. */
	public void add(Person child){
		if (size >= capacity) {
			reallocate();
		}
		children[size] = child;
		++size;
	}
	
	/*
	 * Method compareTo() comparing two families, and
	 * returns true if two families are equal.
	 * @return boolean
	 * @param Family object
	 *  **/
	public boolean compareTo(Family other){
		if(this.hashCode() == other.hashCode()){
			return true;
		}
		return false;
	}
	
	/**
	 * Override method toString() 
	 * @return String
	 * */
	public String toString(){
		String s = "\t\tFamily Informations\n";
		s += "Father: \n" + father.toString();
		s += "Mother: \n" + mother.toString();
		for (int i = 0; i < size; i++) {
			s += "Child" + i + ":\n" + children[i].toString();
		}
		return s;
	}
	/**
	 * Method isRelative() returns true if one of the persons is a 
	 * relative of the other by equals sirname the family array list.
	 * @param get two person objects and family objects array 
	 * @return boolean type, true or false.
	 *  */
	public static boolean isRelative(Person one, Person two, Family[] families){
		if(one.getLastName() == two.getLastName())
			return true;
		
		for (int i = 0; i < families.length; i++) {
			String comp = families[i].father.getLastName();
			if(comp == one.getLastName() ||
				comp == two.getLastName()){
				return true;
			}
		}
		return false;
	}
	
	//Gettters and setters methods.
	public Person getFather() {
		return father;
	}

	public void setFather(Person father) {
		this.father = father;
	}

	public Person getMother() {
		return mother;
	}

	public void setMother(Person mother) {
		this.mother = mother;
	}

	public Person[] getChildren() {
		return children;
	}

	public void setChildren(Person[] children) {
		this.children = children;
	}

	public static int getNumberOfFamilies() {
		return numberOfFamilies;
	}

	// Actually, Java take cares of all clean up resources,
	// But we should decrease number of families in destructor,
	protected void finalize(){
		--numberOfFamilies;
	}

}
