class Hello {
	public static void main(String[] args) {
		System.out.println("Hello World");

		System.out.println("\nYour arguments:");
		for(int i = 0;i < args.length;++i) {
			System.out.println(Integer.toString(i) + ".\t" + args[i]);
		}
	}
}
