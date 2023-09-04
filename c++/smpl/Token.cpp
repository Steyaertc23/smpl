#include "Token.h"

TokenVal::TokenVal() {}

TokenVal::TokenVal(int a) {
	this->i = a;
	this->int_init = true;
}

TokenVal::TokenVal(float a) {
	this->f = a;
	this->float_init = true;
}

TokenVal::TokenVal(std::string a) {
	this->s = a;
	this->string_init = true;
}

int TokenVal::get_int() const{
	return this->i;
}

float TokenVal::get_float() const{
	return this->f;
}

std::string TokenVal::get_string() const{
	return this->s;
}

Token::Token() {
	this->type = "None";
}

Token::Token(std::string t) {
	this->type = t;
}

Token::Token(std::string t, TokenVal val) {
	this->type = t;
	this->value = val;
}