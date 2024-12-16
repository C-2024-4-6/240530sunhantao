#pragma once
double celsius_to_fah(double cel)
{
	return(cel * 1.8 + 32);
}
double fahrenheit_to_cels(double fah)
{
	return (fah - 32) / 1.8;
}