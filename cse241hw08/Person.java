/**
 * 
 */
package HW8_101044044;

/** 
 * @author Talayhan
 * 
 * Male female kontrolünü değiştir.
 */
public class Person {
	//Declare data fields and First initialize
	private String firstName = "NoFirstNameYet";
	private String lastName = "NoLastNameYet";
	private int yearOfBirth = 0;
	private String gender = "NotInitializeYet";
	
	/**
	 * No parameter constructor
	 * */
	Person(){
		this.firstName = "NoFirstNameYet";
		this.lastName = "NoLastNameYet";
		this.yearOfBirth = 0;
		this.gender = "NotInitializeYet";
	}
	
	/**
	 * 4 parameter constructor.
	 * */
	Person(String firstName, String lastName,int year, String gender){
		this.firstName = firstName;
		this.lastName = lastName;
		this.yearOfBirth = year;
		if(gender != "Male" && gender != "Female")
			throw new IllegalArgumentException("Gender is invalid!.");
		this.gender = gender;
	}
	
	/**
	 * @author Talayhan
	 * @param String new firstName */
	public void setFirstName(String firstName){
		this.firstName = firstName;
	}
	
	/**
	 * @author Talayhan
	 * @param String new lastName */
	public void setLastName(String lastName){
		this.lastName = lastName;
	}
	
	/**
	 * @author Talayhan
	 * @param String new gender */
	public void setGenderName(String gender){
		if(gender != "Male" && gender != "Female")
			throw new IllegalArgumentException("Gender is invalid!.");
		this.gender = gender;
	}
	
	/**
	 * @author Talayhan
	 * @param int new year */
	public void setBirth(int year){
		this.yearOfBirth = year;
	}
	
	/**
	 * @author Talayhan
	 * @return String firstName */
	public String getFirstName(){
		return firstName;
	}
	
	/**
	 * @author Talayhan
	 * @return String lastName */
	public String getLastName(){
		return lastName;
	}
	
	/**
	 * @author Talayhan
	 * @return int yearOfBirth */
	public int getBirth(){
		return yearOfBirth;
	}
	
	/**
	 * @author Talayhan
	 * @param String person's gender */
	public String getGender(){
		return gender;
	}

	/**
	 * override toString() method */
	public String toString(){
		String s = "First name: " + getFirstName() + "\n";
			   s += "Last name: " + getLastName()  + "\n";
			   s += "Gender: " + getGender()  + "\n";
			   s += "Year of birth: " + getBirth()  + "\n";
	
		return s;
	}
}
