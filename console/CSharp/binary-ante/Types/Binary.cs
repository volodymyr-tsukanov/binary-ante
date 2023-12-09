using System;

namespace VT.Types.Binary
{
	public enum BinaryType { bin4=4, bin8=8, bin12=12, bin16=16, bin20=20, bin24=24, bin28=28, bin32=32, bin36=36, bin40=40, bin44=44, bin48=48 };


	public class Binary
	{
		BinaryType Type;
		int Value;

		protected int seed;


		public Binary(int seed){
			this.seed = seed;
			Type = BinaryType.bin8;
			SetValue(RandRange(0, (int)Math.Pow(2, (int)Type)));
		}
		public Binary(int seed, BinaryType type){
			this.seed = seed;
			this.Type = type;
			SetValue(RandRange(0, (int)Math.Pow(2, (int)type)));
		}
		public Binary(int seed, int value){
			this.seed = seed;
			int b = 4;
			while (b <= 48) {
				if (value < (int) Math.Pow(2, b))
					break;
				
				b += 4;
			}
			Type = (BinaryType) b;
			Value = value;
		}
		public Binary(BinaryType type, int decValue){
			this.Type = type;
			SetValue(decValue);
		}
		public Binary(String bin){
			Type = (BinaryType) bin.Length;
			Value = 0;
			for(int i = 0; i < bin.Length; i++){
				if(bin[i] == 49) Value += (int)Math.Pow(2, bin.Length-1-i);
			}
		}

		public static Binary operator+(Binary lhs, Binary rhs){
			return new Binary(lhs.Value + rhs.Value);
		}
		public static Binary operator-(Binary lhs, Binary rhs){
			int value = (lhs.Value - rhs.Value) < 0 ? 0 : (lhs.Value - rhs.Value);
			return new Binary(value);
		}
		public static Binary operator*(Binary lhs, Binary rhs){
			int value = Math.Abs(lhs.Value * rhs.Value);
			return new Binary(value);
		}
		public static Binary operator/(Binary lhs, Binary rhs){
			int value = 0;
			if(rhs.Value != 0)
				value = Math.Abs(lhs.Value / rhs.Value);
			return new Binary(value);
		}


		public void SetType(BinaryType type){
			if (type > Type)
				Type = type;
		}
		public void SetValue(int decValue, bool enlarge = false){
			int max = (int)Math.Pow(2, (int)Type);
			if (decValue < max) {
				Value = decValue;
			} else {
				if (enlarge) {
				} else
					Value = decValue % (max - 1);
			}
		}


		int RandRange(int min, int max){
			return new Random(seed).Next(min, max);
		}

		public int ToDec(){
			return Value;
		}
		override public string ToString(){
			string s = "";

			int num = Value;
			while (num >= 1) {
				s = (num % 2).ToString() + s;
				num /= 2;
			}
			while (s.Length < (int) Type)
				s = "0" + s;

			return s;
		}

		public Binary Clone(){
			Binary binary = new Binary(Type, Value);

			return binary;
		}


		public static void Reverse(Binary b){
			int number = b.Value, newValue = 0;
			for(int i = 0; i < (int)b.Type; i++){
				if(number%2 == 1) newValue += (int)Math.Pow(2, (int)(b.Type)-1-i);
				number /= 2;
			}
			b.SetValue(newValue);
		}
		public static void Revert(Binary b){
			int number = b.Value, newValue = 0;
			for(int i = 0; i < (int)b.Type; i++){
				if(number%2 == 0) newValue += (int)Math.Pow(2, i);
				number /= 2;
			}
			b.SetValue(newValue);
		}
		public static void AddOne(Binary b){
			b.SetValue(b.Value+1, true);
		}
		public static Binary Add(Binary b1, Binary b2){return null;}
		public static Binary Sub(Binary b1, Binary b2){return null;}
	}
}
