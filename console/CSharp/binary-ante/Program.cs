using System;

namespace binaryAnte
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			Binary bin = new Binary(BinaryType.bin4, 1);
			Binary bin2 = new Binary(BinaryType.bin8, 128);
			Binary bins = bin + bin2;
			Binary binm = bin2 - bin;
			Binary bina = bins * bin2;
			Binary bind = bins / bin2;

			Console.WriteLine(bin.ToDec().ToString() + " = " + bin.ToString());
			Console.WriteLine(bin2.ToDec().ToString() + " = " + bin2.ToString());
			Console.WriteLine(bins.ToDec().ToString() + " = " + bins.ToString());
			Console.WriteLine(binm.ToDec().ToString() + " = " + binm.ToString());
			Console.WriteLine(bina.ToDec().ToString() + " = " + bina.ToString());
			Console.WriteLine(bind.ToDec().ToString() + " = " + bind.ToString());
		}
	}
}
