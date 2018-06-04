public class infinite_loop {
	private static int i;
	
	public infinite_loop(){
		this.i=2;
	}

	public static void main(String args[]){
		while(i>0){
			System.out.println("i sup a 0");	
		}
	}
}
