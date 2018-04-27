Luu y: Thu vien nay chi su dung duoc cho 1 he thong IC HC595, tuc la neu khai bao 2 doi tuong Bico_HC595 mà data_pin, clk_pin ss_pin khac nhau thi khi su dung ham digitalWrite se bi loi

Bico_HC595()
	Chuc nang:
		Khoi tao voi cac thong so mac dinh sau:
			_data_pin = 11
			_clock_pin = 13
			_bit_order = MSBFIRST;
			_num_of_HC595_IC = 4
			_SS_pin = 10
	Tham so: Khong co
	Tra ve: Khong co
	Vi du: 
		Bico_HC595 my_hc595();
//------------------------------------------------------------
Bico_HC595(unsigned char num_of_HC595_IC)
	Chuc nang:
		Khoi tao voi cac thong so sau:
			_data_pin = 11
			_clock_pin = 13
			_bit_order = MSBFIRST;
			_num_of_HC595_IC = num_of_HC595_IC
			_SS_pin = 10
	Tham so:
		num_of_HC595_IC: so IC 74HC595 muon su dung
	Tra ve: Khong co
	Vi du: 
		Bico_HC595 my_hc595(2);
//------------------------------------------------------------
Bico_HC595(unsigned char data_pin, unsigned char clock_pin, unsigned char bit_order, unsigned char num_of_HC595_IC, unsigned char SS_pin)
	Chuc nang:
		Khoi tao voi cac thong so sau:
			_data_pin = data_pin
			_clock_pin = clock_pin
			_bit_order = bit_order;
			_num_of_HC595_IC = num_of_HC595_IC
			_SS_pin = SS_pin
	Tham so:
		data_pin: chan du lieu
		clock_pin: chan xung
		bit_order: thu tu bit truyen
		num_of_HC595_IC: so IC HC595 can su dung
		SS_pin: chan chon chip
	Tra ve: Khong co
	Vi du:
		Bico_HC595 my_hc595(5, 6, MSBFIRST, 2, 7)

//------------------------------------------------------------
setup()
	Chuc nang: Cai dat cac chan data, clk, ss là chân OUTPUT
	Tham so: Khong co
	Tra ve: Khong co
	Vi du:
		my_hc595.setup();
//------------------------------------------------------------
write()
	Chuc nang: Xuat du lieu ra HC595
	Tham so: Du lieu can xuat
	Tra ve: Khong co
	Vi du:
		my_hc595.write(0xAAAA);
		my_hc595.write(0b10101010);
		my_hc595.write(123456789);
//------------------------------------------------------------
digitalWrite()
	Chuc nang: Xuat gia tri ra 1 bit cua hc595
	Tham so:
		bit: Bit can xuat du lieu
		val: gia tri can xuat
	Tra ve: Khong co
	Vi du:
		my_hc595.digitalWrite(2, HIGH);
		my_hc595.digitalWrite(10, LOW);