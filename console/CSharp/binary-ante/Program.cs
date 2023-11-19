﻿using System;

namespace binary_ante
{
	class MainClass
	{
		public static void Main(string[] args)
		{
			Binary bin = new Binary(BinaryType.bin4, 0);
			Binary bin2 = new Binary(BinaryType.bin8, 128);

			Console.WriteLine(bin.toDec().ToString() + " = " + bin.ToString());
			Console.WriteLine(bin2.toDec().ToString() + " = " + bin2.ToString());
		}
	}
}
