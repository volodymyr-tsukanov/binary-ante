using System;
using VT.BinaryAnte;
using VT.Types.Binary;

class MainClass
{
	public static void Main(string[] args)
	{
		Identifier identifier = new Identifier();
		Table table = new Table(identifier);

		table.Print();
	}
}
