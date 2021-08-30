public class Heartbeat {
	public static void main(String[] args) {
		int time=0;
		while(true) {
			try {
				Thread.sleep(1000);
				time++;
				System.out.println(time + " seconds have passed");

			}
			catch (InterruptedException e){
				e.printStackTrace();
			}
		}
		
	}
}
