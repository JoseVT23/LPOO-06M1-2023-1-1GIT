#pragma once

using namespace System;

public ref class ComboBoxItem {
public:
	String^ Name;
	int Value;
	ComboBoxItem(String^ Name, int Value) {
		this->Name = Name;
		this->Value = Value;
	}
	
	String^ ToString()  override {
		return this->Value + " - " + this->Name;
	}
	
};

