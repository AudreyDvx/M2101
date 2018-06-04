public class stackoverflow {

	public static int fonction(int n){
		int f=0;

		if(n<=0){
			f=0;
		}
		if(n>=1){
			f=1+(fonction(n-1));
		}
		return f;
	}

	public static void main (String args[]){
		fonction(1000);
		fonction(1000000);

	}


}
