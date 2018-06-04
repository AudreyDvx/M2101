public class segmentation_fault {
	private static int[] t;

	public segmentation_fault(){
		this.t=new int[10];
	}

	public static void main (String[] args) {

		t[1]=1;
		t[100]=2;
		t[1000]=3;
	}
}
