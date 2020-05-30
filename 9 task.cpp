#include <iostream>
#include <string>


using namespace std;
class Invoice
{
	public:
		Invoice ( string, string, int, int );
		void setPartNumber (string number);
		string getPartNumber ();
		void setPartDescription (string desc);
		string getPartDescription();
		void setQuantity (int quant);
		int getQuantity();
		void setPricePerItem(int price);
		int getPricePerItem();
		int getInvoiceAmount();
	private:
		string partNumber;
		string partDescription;
		int quantity;
		int pricePerItem;
};

Invoice::Invoice ( string number, string desc, int quant, int price )
{
	setPartNumber (number);
	setPartDescription (desc);
	setQuantity (quant);
	setPricePerItem (price);
}

void Invoice::setPartNumber (string number)
{
	partNumber = number;
}

string Invoice::getPartNumber ()
{
	return partNumber;
}

void Invoice::setPartDescription (string desc)
{
	partDescription = desc;
}

string Invoice::getPartDescription()
{
	return partDescription;
}

void Invoice::setQuantity (int quant)
{
	if (quant >= 0) quantity = quant;
	else quantity = 0;
}

int Invoice::getQuantity()
{
	return quantity;
}

void Invoice::setPricePerItem(int price)
{
	if (price >= 0) pricePerItem = price;
	else pricePerItem = 0;
}

int Invoice::getPricePerItem()
{
	return pricePerItem;
}

int Invoice::getInvoiceAmount()
{
	return quantity * pricePerItem;
}


int main()
{
	Invoice invoice1 ("1", "first invoice", 30, 10);
	Invoice invoice2 ("2", "second invoice", -40, -4);

	cout << "Invoice amount for " << invoice1.getPartDescription() << ", which is " << invoice1.getQuantity() << " parts " <<
	invoice1.getPricePerItem() << " each is " << invoice1.getInvoiceAmount() << endl;
	cout << "Invoice amount for " << invoice2.getPartDescription() << ", which is " << invoice2.getQuantity() << " parts " <<
	invoice2.getPricePerItem() << " each is " << invoice2.getInvoiceAmount() << endl;
}
