#pragma once
#include <string>
namespace {
	class TokenVal
	{
	private:
		int i;
		float f;
		std::string s;
	public:
		bool int_init = false;
		bool float_init = false;
		bool string_init = false;
		TokenVal();
		TokenVal(int a);
		TokenVal(float a);
		TokenVal(std::string a);
		int get_int() const;
		float get_float() const;
		std::string get_string() const;
	};

	class Token
	{
		std::string type;
		TokenVal value;
	public:
		Token();
		Token(std::string t);
		Token(std::string t, TokenVal val);
		operator std::string () const {
			std::string out = type;
			if (value.int_init)
				out += value.get_int();
			else if (value.float_init)
				out += value.get_float();
			else if (value.string_init)
				out += value.get_string();
			return out;
		}
	};

}